open Js.Promise;

type t('a) = Js.Promise.t('a);

let return = resolve;

let bind = (x, f) => then_(f, x);

let (>>=) = bind;

let fmap = (f, a) => a >>= (x => x |> f |> return);

let progress = (msg, a) => {
  Js.log(msg);
  return(a);
};
