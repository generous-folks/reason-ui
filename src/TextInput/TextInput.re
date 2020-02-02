open Emotion;

let defaultStyle = [%css []];

let checkStyle = [%css [color(`hex("000000"))]];

let disabledStyle = [%css [opacity(0.5)]];

let inputStyle = [%css [visibility(`hidden)]];

let getCheckedStyle = checked => checked ? checkStyle : "";

let createLabel =
  fun
  | Some(label) =>
    <Typography size=Typography.Small>
      {React.string(label)}
      <br />
    </Typography>
  | None => React.null;

[@react.component]
let make =
    (
      ~value=?,
      ~onChange=?,
      ~disabled=false,
      ~label=?,
      ~type_="text",
      ~children=React.null,
    ) => {
  let (internalValue, setInternalValue) = React.useState(() => "");

  let onChange =
    switch (onChange) {
    | Some(changeHandler) => changeHandler
    | None => (
        event => setInternalValue(ReactEvent.Form.target(event)##value)
      )
    };

  let value =
    switch (value) {
    | Some(value) => value
    | None => internalValue
    };

  <label className={Cx.merge([|disabled ? disabledStyle : ""|])}>
    {createLabel(label)}
    children
    <input type_ className=defaultStyle value onChange disabled />
  </label>;
};