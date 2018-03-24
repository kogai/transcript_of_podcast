type s;

type b;

type config = {. "keyFilename": string};

[@bs.module] [@bs.new]
external default : config => s = "@google-cloud/storage";

[@bs.send] external bucket : (s, string) => b = "bucket";

[@bs.send]
external upload : (b, string, ('a, 'b, 'c) => unit) => unit = "upload";
