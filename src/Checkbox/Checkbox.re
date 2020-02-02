open Emotion;

let defaultStyle = [%css
  [
    border(`px(3), `solid, `hex("222222")),
    position(`absolute),
    left(`px(0)),
    borderRadius(`px(3)),
    cursor(`pointer),
    color(`hex("ffffff")),
    textAlign(`center),
    display(`inlineBlock),
    width(`rem(1.)),
    height(`rem(1.)),
    userSelect(`none),
  ]
];

let checkStyle = [%css [color(`hex("000000"))]];

let disabledStyle = [%css [opacity(0.5)]];

let inputStyle = [%css [visibility(`hidden)]];

let getCheckedStyle = checked => checked ? checkStyle : "";

[@react.component]
let make =
    (
      ~checked=?,
      ~onChange=?,
      ~disabled=false,
      ~label="",
      ~children=React.null,
    ) => {
  let (internalChecked, setInternalChecked) = React.useState(() => false);

  let onChange =
    switch (onChange) {
    | Some(changeHandler) => changeHandler
    | None => (_e => setInternalChecked(_c => !internalChecked))
    };

  let checked =
    switch (checked) {
    | Some(checked) => checked
    | None => internalChecked
    };

  <label className={Cx.merge([|disabled ? disabledStyle : ""|])}>
    <input type_="checkbox" className=inputStyle checked onChange disabled />
    <span className={Cx.merge([|defaultStyle, getCheckedStyle(checked)|])}>
      {React.string({js|✓|js})}
    </span>
    {React.string(label)}
    children
  </label>;
};