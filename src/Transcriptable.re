[%raw "require('isomorphic-fetch')"];

exception Invalid_url;

let nameOfUrl = url : string =>
  Js.Re.(
    fromString(".*\\/([0-9a-zA-Z-_]*\\.mp3$)")
    |> exec(url)
    |> (
      fun
      | Some(name) => captures(name)
      | None => raise(Invalid_url)
    )
    |> (xs => xs[1])
    |> Js.toOption
    |> (
      fun
      | Some(name) => name
      | None => raise(Invalid_url)
    )
  );

type s;

type r;

[@bs.module "fs"]
external createWriteStream : string => s = "createWriteStream";

[@bs.module "https"] external get : (string, r => s) => s = "get";

[@bs.send] external pipe : (Fetch.readableStream, s) => s = "pipe";

[@bs.send]
external on : (s, [@bs.string] [ | `close | `error], 'a => unit) => 'b = "on";

let download = (url: string) : Js.Promise.t(unit) => {
  let ws = createWriteStream(Printf.sprintf("audio/%s", nameOfUrl(url)));
  Async.(
    Fetch.fetch(url)
    >>= (
      res =>
        Js.Promise.make((~resolve, ~reject) =>
          pipe(Fetch.Response.body(res), ws)
          |> on(_, `close, x => resolve(. x))
          |> on(_, `error, e => reject(. e))
        )
    )
  );
};

module Transcripter =
       (
         Impl: {
           type t;
           let rss_endpoint: string;
           /* (title, url) */
           let parse_rss: string => list((string, string));
         },
       )
       : {type t; let run: unit => Js.Promise.t(array(unit));} => {
  type t = {
    title: string,
    url: string,
  };
  let job = (x: t) : Js.Promise.t(unit) => {
    let fileId = x.url |> nameOfUrl |> Filename.chop_extension;
    let mp3 = Printf.sprintf("audio/%s.mp3", fileId);
    let flac = Printf.sprintf("audio/%s.flac", fileId);
    let flacInterMediate = Printf.sprintf("audio/%s.im.flac", fileId);
    let ffmpeg = Printf.sprintf("ffmpeg -i %s %s", mp3, flacInterMediate);
    let sox =
      Printf.sprintf(
        "sox %s --channels=1 -r 44100 --bits=16 %s",
        flacInterMediate,
        flac,
      );
    let noOption = Node.Child_process.option();
    Js.log("Download mp3 file...");
    Async.(
      download(x.url)
      >>= progress("Convert mp3 to flac...")
      |> fmap((_) => Node.Child_process.execSync(ffmpeg, noOption))
      >>= progress("Modify encoding...")
      |> fmap((_) => Node.Child_process.execSync(sox, noOption))
      >>= progress("Upload to cloud storage...")
      |> fmap((_) =>
           Storage.default({"keyFilename": "./secrets/secret.json"})
         )
      |> fmap(Storage.bucket(_, "transcript-reason-town-ml"))
      >>= Storage.upload(_, flac)
      >>= progress("Analyzing on Google Cloud Speech...")
      >>= Speech.translate(fileId, Utils.escape(x.title))
    );
  };
  let run = () =>
    Async.(
      Fetch.fetch(Impl.rss_endpoint)
      >>= Fetch.Response.text
      >>= progress("Fetch RSS feed...")
      |> fmap(Impl.parse_rss)
      >>= (
        xs =>
          Js.Promise.all(
            Array.of_list(
              List.map(((title, url)) => job({title, url}), xs),
            ),
          )
      )
    );
};
