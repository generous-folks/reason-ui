open Emotion;

let defaultStyle = [%css [
  border(`px(3))(`solid)(`hex("222222")),
  position(`absolute),
  left(`px(0)),
  borderRadius(`px(3)),
  cursor(`pointer),
  color(`hex("ffffff")),
  textAlign(`center),
  display(`inlineBlock),
  width(`rem(1.)),
  height(`rem(1.)),
  userSelect(`none)
]];

let checkStyle = [%css [
  color(`hex("000000")),
]];

let inputStyle = [%css [
  visibility(`hidden)
]];

let getCheckedStyle = checked => switch(checked) {
  | Some(checked) => checked ? checkStyle : ""
  | None => ""
};

[@react.component]
let make = (~checked=?, ~onChange=?, ~disabled=false) => {

  <label>
    <input type_="checkbox" className=inputStyle checked=?checked onChange=?onChange disabled=disabled />
    <span className=Cx.merge([| defaultStyle, getCheckedStyle(checked) |])>{React.string({js|✓|js})}</span>
  </label>
};