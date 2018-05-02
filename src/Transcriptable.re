module Transcripter =
       (
         Impl: {
           type t;
           let rss_endpoint: string;
           /* (title, url) */
           let parse_rss: string => list((string, string));
         },
       )
       : {type t;} => {
  type t = {
    title: string,
    url: string,
  };
};
