const fs = require("fs");
const fetch = require("node-fetch");
const speech = require("@google-cloud/speech");
// /*
const client = new speech.SpeechClient({
  projectId: "transcript-reason-town-fm",
  keyFilename: "./transcript-reason-town-fm-ee1814120d4b.json"
});

const request = {
  config: {
    encoding: "FLAC",
    sampleRateHertz: 44100,
    languageCode: "en-US"
  },
  audio: {
    // uri: "gs://cloud-samples-tests/speech/brooklyn.flac"
    // uri: "gs://transcript-reason-town-ml/sample-1.mp3"
    // uri: "gs://transcript-reason-town-ml/ba9f3bee.mp3"
    // uri: "gs://transcript-reason-town-ml/sample-1.flac"
    uri: "gs://transcript-reason-town-ml/output.flac"
  }
};

client
  .longRunningRecognize(request)
  .then(data => {
    const operation = data[0];
    operation.on("complete", (result, metadata, finalApiResponse) => {
      result.results.forEach(r => console.log(r));
    });
    operation.on("response", (result, metadata, finalApiResponse) => {
      result.results.forEach(r => console.log(r));
    });
    operation.on("progress", (metadata, apiResponse) => {
      console.log("...");
      console.log(metadata);
      console.log(apiResponse);
    });
    operation.on("error", err => {
      console.error("ON ERROR!");
      console.error(err);
    });
    console.log(operation.eventNames());
  })
  .catch(e => {
    console.error("Ordinary error!");
    console.error(e);
  });
