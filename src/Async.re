type t('a) = Js.Promise.t('a);

let return = Js.Promise.resolve;

let bind = (x, f) => Js.Promise.then_(f, x);

let (>>=) = bind;
