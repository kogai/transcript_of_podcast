[%raw "require('isomorphic-fetch')"];

let rss_endpoint = "https://rss.simplecast.com/podcasts/4151/rss";
/* let result = PixlXml.parse("<test><A>a</A></test>", ~forceArrays=false);
Js.log(result);
Js.log("Hello, BuckleScript and Reason!"); */
let _x = Async.(
  Fetch.fetch(rss_endpoint)
  >>= Fetch.Response.text
  >>= PixlXml.parse |> return
  >>= x => return(Js.log(x))
);
