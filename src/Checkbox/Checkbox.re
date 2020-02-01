open Emotion;

let defaultStyle = [%css [
  border(`px(3))(`solid)(`hex("222222")),
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

[@react.component]
let make = () => {
  let (checked, setChecked) = React.useState(() => false);

  <label>
    <input type_="checkbox" className=inputStyle checked=checked onChange={(_e) => setChecked(checked => !checked)} />
    <span className=Cx.merge([| defaultStyle, checked ? checkStyle : "" |])>{React.string({js|✓|js})}</span>
  </label>
};