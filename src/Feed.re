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

type s;

type r;

[@bs.module "fs"]
external createWriteStream : string => s = "createWriteStream";

[@bs.module "https"] external get : (string, r => s) => s = "get";

[@bs.send] external pipe : (Fetch.readableStream, s) => s = "pipe";

[@bs.send]
external on : (s, [@bs.string] [ | `close | `error], 'a => unit) => 'b = "on";
