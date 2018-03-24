[%raw "require('isomorphic-fetch')"];

let rss_endpoint = "https://rss.simplecast.com/podcasts/4151/rss";

let _x =
  Async.(
    Fetch.fetch(rss_endpoint)
    >>= Fetch.Response.text
    |> fmap(PixlXml.parse(_))
    |> fmap(Feed.tFromJs)
    |> fmap(x => x.Feed.channel)
    |> fmap(a => {
         Js.log(a);
         let f = Feed.channelFromJs;
         /* let b = Feed.channelFromJs(a); */
         /* Feed.channelFromJs */
         a;
       })
    |> fmap(x => Js.log(x))
  );
