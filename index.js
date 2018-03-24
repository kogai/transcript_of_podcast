const fs = require("fs");
const fetch = require("node-fetch");
const speech = require('@google-cloud/speech');
let mp3Split = require('mp3-split');
let options = {input: './sample.mp3', audios: [
  '[00:00] sample-1',
  '[05:00] sample-2',
  '[10:00] sample-3',
  '[15:00] sample-4',
  '[20:00] sample-5',
  '[25:00] sample-6',
  '[30:00] sample-7',
  '[35:00] sample-8',
]};
// let split = mp3Split(options);

// split.parse().then((parsedAudio) => {
//   console.log(parsedAudio);
//   for (let audio of parsedAudio) {
//     console.log(audio.name);      // filename 
//     console.log(audio.start);     // audio start 
//     console.log(audio.end);       // audio end 
//     console.log(audio.trackName); // track name 

// const param = {
//   "config": {
//       // "encoding":"LINEAR16",
//       "sampleRateHertz": 16000,
//       "languageCode": "en-US",
//       "enableWordTimeOffsets": false
//   },
//   "audio": {
//       // content: fs.readFileSync("./sample.mp3").toString('base64'),
//       content: fs.readFileSync(audio.name).toString('base64'),

//       // "uri":"https://dts.podtrac.com/redirect.mp3/audio.simplecast.com/fc35829d.mp3"
//       // "uri":"gs://cloud-samples-tests/speech/brooklyn.flac"
//   }
// };
// Creates a client
const client = new speech.SpeechClient({
  projectId: "transcript-reason-town-fm"
});

const request = {
  config: {
    // "encoding":"MP3",
    // "sampleRateHertz": 16000,
    // "languageCode": "en-US",
    // "enableWordTimeOffsets": false
    encoding: 'LINEAR16',
    sampleRateHertz: 16000,
    languageCode: 'en-US',
  },
  "audio": {
      // content: fs.readFileSync("./sample-1.mp3").toString('base64'),

      // "uri":"https://dts.podtrac.com/redirect.mp3/audio.simplecast.com/fc35829d.mp3"
      // "uri":"gs://cloud-samples-tests/speech/brooklyn.flac"
      "uri":"gs://transcript-reason-town-ml/sample-1.mp3"
  }
  // interimResults: false, // If you want interim results, set this to true
};

client
  .longRunningRecognize(request)
  .then(data => {
    const operation = data[0];
    // Get a Promise representation of the final result of the job
    return operation.promise();
  })
  .then(data => {
    const response = data[0];
    const transcription = response.results
      .map(result => result.alternatives[0].transcript)
      .join('\n');
    console.log(`Transcription: ${transcription}`);
  })
  .catch(err => {
    console.error('ERROR:', err);
  });
// Stream the audio to the Google Cloud Speech API
// const recognizeStream = client
//   .streamingRecognize(request)
//   .on('error', console.error)
//   .on('data', data => {
//     // console.log(
//     //   `Transcription: ${data.results[0].alternatives[0].transcript}`
//     // );
//     console.log(data);
//   });
// // console.log(client);

// // Stream an audio file from disk to the Speech API, e.g. "./resources/audio.raw"
// fs.createReadStream("./sample.mp3").pipe(recognizeStream);
// fetch("https://dts.podtrac.com/redirect.mp3/audio.simplecast.com/fc35829d.mp3")
//   .then(json => {
//     const dest = fs.createWriteStream('./sample.mp3');
// 		json.body.pipe(dest);
//     console.log(json);
//   // console.log(json.results[0].alternatives)
//   })

// fetch('https://speech.googleapis.com/v1/speech:recognize ',
// {
//   method: 'POST',
// 	body: JSON.stringify(param),
// 	headers: {
//     'Content-Type': 'application/json',
//     'Authorization': `Bearer ${process.env.AUTH_KEY}`
//   },
// })
// 	.then(res => res.json())
//   .then(json => {
//     console.log(json);
//   // console.log(json.results[0].alternatives)
//   })
//   .catch(e => {
//     console.error(e);
//   })
//   }
// });
  