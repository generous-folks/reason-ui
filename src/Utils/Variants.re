type variantTypes =
  | Primary
  | Secondary
  | Default
  | Disabled;

type cssBasicTypes = {
  primary: (~theme: ThemeTypes.theme) => string,
  secondary: (~theme: ThemeTypes.theme) => string,
  default: (~theme: ThemeTypes.theme) => string,
  disabled: (~theme: ThemeTypes.theme) => string,
};

let getBasicType = (~variant, ~cssVariants, ~theme) =>
  switch (variant) {
  | Primary =>
    Customize.mergeStyles(
      ~customClassName=cssVariants.primary(~theme),
      ~originalClassName=cssVariants.default(~theme),
    )
  | Secondary =>
    Customize.mergeStyles(
      ~customClassName=cssVariants.secondary(~theme),
      ~originalClassName=cssVariants.default(~theme),
    )
  | Default => cssVariants.default(~theme)
  | Disabled =>
    Customize.mergeStyles(
      ~customClassName=cssVariants.disabled(~theme),
      ~originalClassName=cssVariants.default(~theme),
    )
  };