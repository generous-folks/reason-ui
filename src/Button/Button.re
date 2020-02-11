module Css = ButtonStyles;

let buttonVariants: Customize.cssVariantTypes = {
  primary: Css.primary,
  secondary: Css.primary,
  default: Css.default,
  disabled: Css.primary,
};

[@react.component]
let make =
    (
      ~variant=Customize.Default,
      ~onClick=_ => ignore(),
      ~className="",
      ~children,
    ) => {
  let theme = ThemeContext.useTheme();

  let currentVariantStyle =
    Customize.getVariantType(~variant, ~cssVariants=buttonVariants, ~theme);

  <button
    onClick
    className={
      Customize.mergeStyles(
        ~customClassName=className,
        ~originalClassName=currentVariantStyle,
      )
    }>
    children
  </button>;
};