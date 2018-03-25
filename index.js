const fs = require("fs");
const fetch = require("node-fetch");
const speech = require("@google-cloud/speech");

const client = new speech.SpeechClient({
  projectId: "transcript-reason-town-fm",
  keyFilename: "./secret.json"
});

const request = {
  config: {
    encoding: "FLAC",
    sampleRateHertz: 44100,
    languageCode: "en-US"
  },
  audio: {
    // uri: "gs://transcript-reason-town-ml/7c823e12.flac"
    uri: "gs://transcript-reason-town-ml/sample-1.flac"
  }
};

client
  .longRunningRecognize(request)
  .then(data => {
    const operation = data[0];
    operation.on("complete", (result, metadata, finalApiResponse) => {
      const transcript = result.results
        .map(r =>
          r.alternatives.reduce((acc, a) => `${acc}  \n${a.transcript}`, "")
        )
        .join("\n\n");
      console.log(transcript);
      fs.writeFileSync("sample.md", transcript);
    });

    operation.on("progress", (metadata, apiResponse) => {
      console.log("...");
    });

    operation.on("error", err => {
      console.error("ON ERROR!");
      console.error(err);
    });
  })
  .catch(e => {
    console.error("Ordinary error!");
    console.error(e);
  });
