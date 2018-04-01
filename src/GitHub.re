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
  let makePullRequest =
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

[@bs.val] external token : option(string) = "process.env.GITHUB_API_TOKEN";
[@bs.send]
external stringOfBuffer : ('a, [@bs.string] [ | `utf8]) => string = "toString";

let noOption = Node.Child_process.option();

let branch =
  Node.Child_process.execSync("date -I", noOption)
  |> stringOfBuffer(_, `utf8)
  |> Js.String.trim
  |> Printf.sprintf("update/%s", _);

make(~token=Belt.Option.getExn(token), ())
   |> getRepo(_, "kogai", "transcript_reason_town_fm")
   |> Repository.makePullRequest(
        ~title="Add New Episode",
        ~head=branch,
        _,
      );
