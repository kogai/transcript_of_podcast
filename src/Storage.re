type s;

type b;

type config = {. "keyFilename": string};

[@bs.module] [@bs.new]
external default : config => s = "@google-cloud/storage";

[@bs.send] external bucket : (s, string) => b = "bucket";

[@bs.send]
external uploadCallback : (b, string, (Js.nullable('a), 'b) => unit) => unit =
  "upload";

let upload = (a, filename) =>
  Js.Promise.make((~resolve, ~reject) =>
    uploadCallback(a, filename, (err, file) =>
      switch (Js.toOption(err)) {
      | Some(err) => reject(. err)
      | None => resolve(. file)
      }
    )
  );
