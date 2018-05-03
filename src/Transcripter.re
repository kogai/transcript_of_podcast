module ReasonTown =
  Transcriptable.Transcripter(
    {
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
      type t;
      let rss_endpoint = "https://rss.simplecast.com/podcasts/4151/rss";
      let parse_rss = xml =>
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
              Node.Fs.readdirSync("audio")
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
    },
  );
