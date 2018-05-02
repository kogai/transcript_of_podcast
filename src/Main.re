[%raw "require('isomorphic-fetch')"];

Js.Promise.catch(
  e => {
    Js.log(e);
    exit(1);
  },
  ReasonTown.ReasonTown.run(),
);
