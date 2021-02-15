open Customize;

module Css = ButtonStyles;

[@react.component]
let make =
    (
      ~variant=Variants.Default,
      ~onClick=_ => ignore(),
      ~className="",
      ~children,
    ) => {
  let theme = ThemeContext.useTheme();

  let classes = Css.getClasses(variant, theme, className);

  <button className=classes> children </button>;
};