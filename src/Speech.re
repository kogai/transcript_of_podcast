type t;

type clientConfig = {
  .
  "keyFilename": string,
  "projectId": string,
};

[@bs.module "@google-cloud/speech"] [@bs.new]
external speechClient : clientConfig => t = "SpeechClient";

type operation;

type requestConfig = {
  .
  "config": {
    .
    "encoding": string,
    "sampleRateHertz": int,
    "languageCode": string,
  },
  "audio": {. "uri": string},
};

[@bs.send]
external longRunningRecognize :
  (t, requestConfig) => Js.Promise.t(array(operation)) =
  "longRunningRecognize";

type result = {
  .
  "results": array({. "alternatives": array({. "transcript": string})}),
};

[@bs.send]
external on :
  (
    operation,
    [@bs.string] [ | `complete | `progress | `error],
    ('a, 'b, 'c) => unit
  ) =>
  unit =
  "on";

let translate = (fileId, title, ()) =>
  Async.(
    speechClient({
      "projectId": "transcript-reason-town-fm",
      "keyFilename": "./secret.json",
    })
    |> longRunningRecognize(
         _,
         {
           "config": {
             "encoding": "FLAC",
             "sampleRateHertz": 44100,
             "languageCode": "en-US",
           },
           "audio": {
             "uri":
               Printf.sprintf(
                 "gs://transcript-reason-town-ml/%s.flac",
                 fileId,
               ),
           },
         },
       )
    >>= (
      data =>
        Js.Promise.make((~resolve, ~reject) => {
          let op = data[0];
          on(op, `complete, (result, _, _) => resolve(. result));
          on(op, `progress, (_, _, _) => Js.log("Speech analysing..."));
          on(op, `error, (e, _, _) => reject(. e));
        })
    )
    |> fmap(result =>
         result##results
         |> Array.to_list
         |> List.map(r =>
              List.fold_left(
                (acc, a) => Printf.sprintf("%s  \n%s", acc, a##transcript),
                "",
                r##alternatives,
              )
            )
         |> String.concat("\n\n")
         |> (
           text =>
             Node.Fs.writeFileSync(
               Printf.sprintf("audio/%s.md", title),
               text,
               `utf8,
             )
         )
       )
  );
