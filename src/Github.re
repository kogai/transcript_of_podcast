/* [@bs.module "fs"] */
/* external createWriteStream : string => s = "createWriteStream"; */
/*  */
/* [@bs.module "https"] external get : (string, r => s) => s = "get"; */
/*  */
/* [@bs.send] external pipe : (Fetch.readableStream, s) => s = "pipe"; */
/*  */
/* [@bs.send] */
/* external on : (s, [@bs.string] [ | `close | `error], 'a => unit) => 'b = "on"; */
/* type config = {. "keyFilename": string}; */
/*  */
/* [@bs.module] [@bs.new] */
/* external default : config => s = "@google-cloud/storage"; */
type t;

type auth = {
  .
  "username": Js.undefined(string),
  "password": Js.undefined(string),
  "token": Js.undefined(string),
};

[@bs.module] [@bs.new]
external default : Js.undefined(auth) => t = "github-api";

let make = (~username=?, ~password=?, ~token=?, _) =>
  switch (username, password, token) {
  | (None, None, None) => default(Js.Undefined.empty)
  | _ =>
    Js.Undefined.(
      default(
        return({
          "username": fromOption(username),
          "password": fromOption(password),
          "token": fromOption(token),
        }),
      )
    )
  };

let x = make(~username="ok", ());
