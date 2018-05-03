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
type root('a) = {
  version: string,
  channel: 'a,
};

let parse_rss_impl = (dir_name, xml) =>
  xml
  |> PixlXml.parse(_)
  |> rootFromJs
  |> (x => x.channel)
  |> channelFromJs
  |> (x => x.item)
  |> Array.to_list
  |> List.map(itemFromJs)
  |> List.map(x => {...x, enclosure: enclosureFromJs(x.enclosure)})
  |> (
    xs => {
      let files =
        Node.Fs.readdirSync(Printf.sprintf("audio/%s", dir_name))
        |> Belt.List.fromArray
        |> List.filter(Js.Re.test(_, Js.Re.fromString(".*\\.md$")))
        |> List.map(Js.String.split("."))
        |> List.map(xs => xs[0])
        |> Array.of_list;
      xs
      |> List.filter((x: item(enclosure)) => {
           let title = Utils.escape(x.title);
           ! Js.Array.includes(title, files);
         });
    }
  )
  |> List.map((x: item(enclosure)) => (x.title, x.enclosure.url));

module ReasonTown =
  Transcriptable.Transcripter(
    {
      type t;
      let dir_name = "reasontown";
      let rss_endpoint = "https://rss.simplecast.com/podcasts/4151/rss";
      let parse_rss = parse_rss_impl(dir_name);
    },
  );

module RustySpike =
  Transcriptable.Transcripter(
    {
      type t;
      let dir_name = "rustyspike";
      let rss_endpoint = "https://rusty-spike.blubrry.net/feed/podcast/";
      let parse_rss = parse_rss_impl(dir_name);
    },
  );
