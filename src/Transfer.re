[%raw "require('isomorphic-fetch')"];

let rss_endpoint = "https://rss.simplecast.com/podcasts/4151/rss";

[@bs.send]
external stringOfBuffer : ('a, [@bs.string] [ | `utf8]) => string = "toString";

let job = (x: Feed.item(Feed.enclosure)) : Js.Promise.t(unit) => {
  let fileId = Feed.(x.enclosure |> Feed.nameOfUrl |> Filename.chop_extension);
  let mp3 = Printf.sprintf("audio/%s.mp3", fileId);
  let flac = Printf.sprintf("audio/%s.flac", fileId);
  let flacInterMediate = Printf.sprintf("audio/%s.im.flac", fileId);
  let ffmpeg = Printf.sprintf("ffmpeg -i %s %s", mp3, flacInterMediate);
  let sox =
    Printf.sprintf(
      "sox %s --channels=1 --bits=16 %s",
      flacInterMediate,
      flac,
    );
  let noOption = Node.Child_process.option();
  Js.log("Download mp3 file...");
  Async.(
    Feed.download(x.Feed.enclosure)
    >>= progress("Convert mp3 to flac...")
    |> fmap((_) => Node.Child_process.execSync(ffmpeg, noOption))
    >>= progress("Modify encoding...")
    |> fmap((_) => Node.Child_process.execSync(sox, noOption))
    >>= progress("Upload to cloud storage...")
    |> fmap((_) => Storage.default({"keyFilename": "./secret.json"}))
    |> fmap(Storage.bucket(_, "transcript-reason-town-ml"))
    >>= Storage.upload(_, flac)
    >>= progress("Analyzing on Google Cloud Speech...")
    >>= Speech.translate(fileId)
  );
};

let result =
  Async.(
    Fetch.fetch(rss_endpoint)
    >>= Fetch.Response.text
    >>= progress("Fetch RSS feed...")
    |> fmap(PixlXml.parse(_))
    |> fmap(Feed.tFromJs)
    |> fmap(x => Feed.(x.channel))
    |> fmap(Feed.channelFromJs)
    |> fmap(x => Feed.(x.item))
    |> fmap(Array.to_list)
    |> fmap(List.map(Feed.itemFromJs))
    |> fmap(
         List.map(x => Feed.{...x, enclosure: enclosureFromJs(x.enclosure)}),
       )
    |> fmap(List.hd)
    |> fmap(job)
  );

Js.Promise.catch(
  e => {
    Js.log(e);
    exit(1);
  },
  result,
);
