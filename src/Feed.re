[@bs.deriving jsConverter]
type enclosure = {
  url: string,
  length: string,
  _type: string,
};

[@bs.deriving jsConverter]
type item('a) = {
  title: string,
  link: string,
  description: string,
  pubDate: string,
  enclosure: 'a,
};

[@bs.deriving jsConverter]
type channel('a) = {
  title: string,
  description: string,
  pubDate: string,
  item: array('a),
};

[@bs.deriving jsConverter]
type t('a) = {
  version: string,
  channel: 'a,
};

exception Invalid_url;

let nameOfUrl = (a: enclosure) : string =>
  Js.Re.(
    fromString(".*\\/([0-9a-zA-Z]*\\.mp3$)")
    |> exec(a.url)
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

let download = (a: enclosure) : Js.Promise.t(unit) => {
  let ws = createWriteStream(Printf.sprintf("audio/%s", nameOfUrl(a)));
  Async.(
    Fetch.fetch(a.url)
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

let escape = s => {
  let rec impl =
    fun
    | [] => ""
    | [" ", ...xs] => "_" ++ impl(xs)
    | [x, ...xs] => x ++ impl(xs);
  s |> Js.String.split("") |> Belt.List.fromArray |> impl;
};
