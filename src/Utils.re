let escape = s => {
  let rec impl =
    fun
    | [] => ""
    | [" ", ...xs] => "_" ++ impl(xs)
    | [x, ...xs] => x ++ impl(xs);
  s |> Js.String.split("") |> Belt.List.fromArray |> impl;
};
