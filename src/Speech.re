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

let make = filename =>
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
               Printf.sprintf("gs://transcript-reason-town-ml/%s", filename),
           },
         },
       )
    >>= (
      data =>
        Js.Promise.make((~resolve, ~reject) => {
          let op = data[0];
          on(op, `complete, (result, _, _) => resolve(. result));
          on(op, `error, (e, _, _) => reject(. e));
        })
    )
    |> fmap(result =>
         Array.to_list(result##results)
         |> List.map(r =>
              List.fold_left(
                (acc, a) => Printf.sprintf("%s  \n%s", acc, a),
                "",
                r##alternatives,
              )
            )
         |> String.concat("\n\n")
         |> Node.Fs.writeFileSync(
              Printf.sprintf(
                "transcripts/%s.md",
                Filename.chop_extension(filename),
              ),
              _,
              `utf8,
            )
       )
  );
