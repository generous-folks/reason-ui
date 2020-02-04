type mode =
  | Dark
  | Light;

type action = {
  primary: string,
  secondary: string,
  default: string,
  disabled: string,
};

type basicVariantFields = {
  primary: string,
  secondary: string,
  default: string,
  disabled: string,
};

type commonColorFields = {
  black: string,
  white: string,
};

type basicColorFields = {
  main: string,
  light: string,
  dark: string,
  contrastText: string,
};

type textColorFields = {
  primary: string,
  secondary: string,
  default: string,
  disabled: string,
  hint: string,
};

type colors = {
  common: commonColorFields,
  primary: basicColorFields,
  secondary: basicColorFields,
  text: textColorFields,
  error: basicColorFields,
  warning: basicColorFields,
  success: basicColorFields,
  grey: basicColorFields,
};

type background = {
  primary: string,
  secondary: string,
  default: string,
  accent: string,
  disabled: string,
};

type theme = {
  mode,
  colors,
  background,
  action: basicVariantFields,
};