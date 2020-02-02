open Emotion;

let defaultStyle = [%css
  [
    height(`rem(1.)),
    width(`auto),
    fontSize(`rem(1.)),
    padding2(`rem(0.5), `rem(1.)),
    margin(`rem(0.3)),
    border(`px(3), `solid, `hex("333333")),
    borderRadius(`px(3)),
    backgroundColor(`rgba((0, 0, 0, 0.))),
  ]
];

let primaryStyle = [%css [borderColor(`hex("000088"))]];

let disabledStyle = [%css [opacity(0.5)]];

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
      ~primary=false,
      ~placeholder="",
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
    <input
      type_
      className={Cx.merge([|defaultStyle, primary ? primaryStyle : ""|])}
      value
      onChange
      disabled
      placeholder
    />
  </label>;
};