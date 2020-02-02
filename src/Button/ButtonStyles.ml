open Emotion

let default ~theme = [%css [
    color(`hex "000000");
    margin(`rem 0.5);
    borderRadius(`rem 2.);
    fontSize(`rem 1.);
    borderColor(`hex "000088");
    cursor(`pointer);
    backgroundColor(`hex theme##primary);
    fontWeight(600);
]]

let primaryStyle = [%css
  [color(`hex "ffffff"); backgroundColor(`hex "000088");]
];