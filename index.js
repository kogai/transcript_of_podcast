const fs = require("fs");
const fetch = require("node-fetch");
const param = {
  "config": {
      "encoding":"FLAC",
      "sampleRateHertz": 16000,
      "languageCode": "en-US",
      "enableWordTimeOffsets": false
  },
  "audio": {
      content: fs.readFileSync("./sample.mp3").toString('base64'),

      // "uri":"https://dts.podtrac.com/redirect.mp3/audio.simplecast.com/fc35829d.mp3"
      // "uri":"gs://cloud-samples-tests/speech/brooklyn.flac"
  }
};

// fetch("https://dts.podtrac.com/redirect.mp3/audio.simplecast.com/fc35829d.mp3")
//   .then(json => {
//     const dest = fs.createWriteStream('./sample.mp3');
// 		json.body.pipe(dest);
//     console.log(json);
//   // console.log(json.results[0].alternatives)
//   })

fetch('https://speech.googleapis.com/v1/speech:recognize ',
{
  method: 'POST',
	body: JSON.stringify(param),
	headers: {
    'Content-Type': 'application/json',
    'Authorization': `Bearer ${process.env.AUTH_KEY}`
  },
})
	.then(res => res.json())
  .then(json => {
    console.log(json);
  // console.log(json.results[0].alternatives)
  })
  .catch(e => {
    console.error(e);
  })
  