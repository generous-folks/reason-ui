open Emotion;

let defaultStyle = [%css [
  border(`px(3))(`solid)(`hex("222222")),
  borderRadius(`rem(1.)),
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
let make = (~values, ~defaultValue="") => {
  let (current, setCurrent) = React.useState(() => defaultValue);
  Js.log(current);

  <>
    {React.array(Array.map(value => 
      <label>
        <input type_="radio" value=value className=inputStyle checked={current == value} onChange={(e) => setCurrent(ReactEvent.Form.target(e)##value)} />
        <span className=Cx.merge([| defaultStyle, current == value ? checkStyle : "" |])>{React.string({js|•|js})}</span>
        {React.string("  " ++ value)}<br />
      </label>
      , values))}
  </>
};