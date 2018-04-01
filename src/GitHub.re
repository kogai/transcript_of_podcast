module Repository = {
  type t;
  type pullrequest = {
    .
    "title": string,
    "head": string,
    "base": string,
    "body": string,
    "maintainer_can_modify": Js.undefined(bool),
  };
  [@bs.send]
  external createPullRequest : (t, pullrequest, 'a => 'b) => Js.Promise.t('c) =
    "";
  let make =
      (
        ~title: string,
        ~head: string,
        ~base="master",
        ~body="",
        ~maintainer_can_modify: option(bool)=?,
        repo: t,
      ) =>
    createPullRequest(
      repo,
      {
        "title": title,
        "head": head,
        "base": base,
        "body": body,
        "maintainer_can_modify":
          Js.Undefined.fromOption(maintainer_can_modify),
      },
    );
};

type t;

type auth = {
  .
  "username": Js.undefined(string),
  "password": Js.undefined(string),
  "token": Js.undefined(string),
};

[@bs.module] [@bs.new]
external default : Js.undefined(auth) => t = "github-api";

[@bs.send] external getRepo : (t, string, string) => Repository.t = "";

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


make(~token="token", ()) |> getRepo(_, "", "");
