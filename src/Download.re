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
    |> fmap(Array.to_list)
    |> fmap(List.map(Feed.itemFromJs))
    |> fmap(
         List.map(x => Feed.{...x, enclosure: enclosureFromJs(x.enclosure)}),
       )
    |> fmap(x => Js.log(x))
  );

Storage.default({
  "keyFilename": "./transcript-reason-town-fm-bfc2d624f978.json",
})
|> Storage.bucket(_, "transcript-reason-town-ml")
|> Storage.upload(
     _,
     "https://dts.podtrac.com/redirect.mp3/audio.simplecast.com/ba9f3bee.mp3",
     (err, file, res) => {
       Js.log(err);
       Js.log(file);
       Js.log(res);
     },
   );
