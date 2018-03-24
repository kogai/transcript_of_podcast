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
