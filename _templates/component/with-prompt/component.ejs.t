---
to: src/<%= h.inflection.titleize(componentName) %>/<%= h.inflection.titleize(componentName) %>.re
unless_exists: true
---
module Css = <%= h.inflection.titleize(componentName) %>Styles;

[@react.component]
let make = (~primary=false, ~children) => {
  let theme = ThemeContext.useTheme();

  <<%= componentMarkup %>>
    className={Cx.merge([|
      Css.default(~theme),
      primary ? Css.primary(~theme) : "",
    |])}>
    children
  </<%= componentMarkup %>>;
};