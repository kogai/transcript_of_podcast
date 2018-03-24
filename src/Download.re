[%raw "require('isomorphic-fetch')"];

let rss_endpoint = "https://rss.simplecast.com/podcasts/4151/rss";

let _x =
  Async.(
    Fetch.fetch(rss_endpoint)
    >>= Fetch.Response.text
    |> fmap(PixlXml.parse(_))
    |> fmap(Feed.tFromJs)
    |> fmap(x => Feed.(x.channel))
    |> fmap(Feed.channelFromJs)
    |> fmap(x => Feed.(x.item))
    |> fmap(x => Js.log(x))
  );
