[%raw "require('isomorphic-fetch')"];

[@bs.val] external argv : array(string) = "process.argv";

let target =
  switch (Array.to_list(argv)) {
  | [_, _, "reasontown", ..._] => Transcripter.ReasonTown.run
  | [_, _, "rustyspike", ..._] => Transcripter.RustySpike.run
  | reason => raise(Invalid_argument(List.fold_left((acc, s) => acc ++ s, "", reason)))
  };

Js.Promise.catch(e => {
  Js.log(e);
  exit(1);
}, target());
