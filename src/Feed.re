[@bs.deriving jsConverter]
type item = {x: string};

[@bs.deriving jsConverter]
type channel = {
  title: string,
  description: string,
  copyright: string,
  language: string,
  pubDate: string,
  lastBuildDate: string,
  item: array(Js.t(item)),
};

[@bs.deriving jsConverter]
type t = {
  version: string,
  channel: Js.t(channel),
};
