module Css = ButtonStyles;

let buttonVariants: Variants.cssBasicTypes = {
  primary: Css.primary,
  secondary: Css.secondary,
  default: Css.default,
  disabled: Css.disabled,
};

[@react.component]
let make =
    (
      ~variant=Variants.Default,
      ~onClick=_ => ignore(),
      ~className="",
      ~children,
    ) => {
  let theme = ThemeContext.useTheme();

  let currentVariantStyle =
    Variants.getBasicType(~variant, ~cssVariants=buttonVariants, ~theme);

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