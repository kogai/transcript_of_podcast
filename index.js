const fs = require("fs");
const fetch = require("node-fetch");
const speech = require("@google-cloud/speech");
let mp3Split = require("mp3-split");
let options = {
  input: "./sample.mp3",
  audios: [
    "[00:00] sample-1",
    "[05:00] sample-2",
    "[10:00] sample-3",
    "[15:00] sample-4",
    "[20:00] sample-5",
    "[25:00] sample-6",
    "[30:00] sample-7",
    "[35:00] sample-8"
  ]
};
// let split = mp3Split(options);

// split.parse().then((parsedAudio) => {
//   console.log(parsedAudio);
//   for (let audio of parsedAudio) {
//     console.log(audio.name);      // filename
//     console.log(audio.start);     // audio start
//     console.log(audio.end);       // audio end
//     console.log(audio.trackName); // track name

const client = new speech.SpeechClient({
  projectId: "transcript-reason-town-fm",
  keyFilename: "./transcript-reason-town-fm-ee1814120d4b.json"
});

const request = {
  config: {
    encoding: "LINEAR16",
    sampleRateHertz: 16000,
    languageCode: "en-US"
  },
  audio: {
    uri: "gs://transcript-reason-town-ml/ba9f3bee.mp3"
  }
};

client.longRunningRecognize(request).then(data => {
  const operation = data[0];
  // return operation.promise();
  operation.on("complete", (result, metadata, finalApiResponse) => {
    console.log(result);
  });

  operation.on("progress", (metadata, apiResponse) => {
    console.log("...");
    console.log(metadata);
    console.log(apiResponse);
  });

  // Adding a listener for the "error" event handles any errors found during polling.
  operation.on("error", err => {
    console.error(err);
  });
});
// .then(data => {
//   const response = data[0];
//   console.log(response);
//   // const transcription = response.results
//   //   .map(result => result.alternatives[0].transcript)
//   //   .join('\n');
//   // console.log(`Transcription: ${transcription}`);
// })
// .catch(err => {
//   console.error('ERROR:', err);
// });
