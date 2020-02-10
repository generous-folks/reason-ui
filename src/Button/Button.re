module Css = ButtonStyles;

[@react.component]
let make = (~primary=false, ~children) => {
  let theme = ThemeContext.useTheme();

  <button
    className={Cx.merge([|
      Css.default(~theme),
      primary ? Css.primary(~theme) : "",
    |])}>
    children
  </button>;
};