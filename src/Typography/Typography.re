module Css = TypographyStyles;
type t =
  | Large
  | Medium
  | Small;

let getClass = size =>
  switch (size) {
  | Some(Large) => Css.large
  | Some(Medium) => Css.medium
  | Some(Small) => Css.small
  | None => ""
  };

[@react.component]
let make = (~primary=false, ~size=?, ~children) => {
  let theme = ThemeContext.useTheme();

  <span
    className={
      Cx.merge([|
        Css.default(~theme),
        getClass(size),
        primary ? Css.primary(~theme) : "",
      |])
    }>
    children
  </span>;
};