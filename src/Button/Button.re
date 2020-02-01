open Emotion

let default = [%css [
  color(`hex("000000")),
  padding2(`rem(0.5))(`rem(2.)),
  margin(`rem(0.5)),
  borderRadius(`rem(2.)),
  fontSize(`rem(1.)),
  borderColor(`hex("000088")),
  cursor(`pointer),
  backgroundColor(`hex("ffffff")),
  fontWeight(600),
]];

let primaryStyle = [%css [
  color(`hex("ffffff")),
  backgroundColor(`hex("000088")),
]];

[@react.component]
let make = (~primary=false, ~children) => {
  <button className=Cx.merge([|default, primary ? primaryStyle : "" |]) >
    children
  </button>
};
