open Emotion;

let mergeStyles = (~customClassName="", ~originalClassName) =>
  Cx.merge([|originalClassName, customClassName|]);

type variantTypes =
  | Primary
  | Secondary
  | Default
  | Disabled;

type cssVariantTypes = {
  primary: (~theme: ThemeTypes.theme) => string,
  secondary: (~theme: ThemeTypes.theme) => string,
  default: (~theme: ThemeTypes.theme) => string,
  disabled: (~theme: ThemeTypes.theme) => string,
};

let getVariantType = (~variant, ~cssVariants, ~theme) =>
  switch (variant) {
  | Primary =>
    mergeStyles(
      ~customClassName=cssVariants.primary(~theme),
      ~originalClassName=cssVariants.default(~theme),
    )
  | Secondary =>
    mergeStyles(
      ~customClassName=cssVariants.secondary(~theme),
      ~originalClassName=cssVariants.default(~theme),
    )
  | Default => cssVariants.default(~theme)
  | Disabled =>
    mergeStyles(
      ~customClassName=cssVariants.disabled(~theme),
      ~originalClassName=cssVariants.default(~theme),
    )
  };