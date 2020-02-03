type buttonTypes = {
  primary: string,
  secondary: string,
  default: string,
  accent: string,
  disabled: string,
};

type colors = {
  primary: string,
  secondary: string,
  default: string,
  accent: string,
};

type background = {
  primary: string,
  secondary: string,
  default: string,
  accent: string,
  disabled: string,
};

type text = {
  primary: string,
  secondary: string,
  default: string,
  accent: string,
  disabled: string,
};

type theme = {
  mutable mode: string,
  mutable colors,
  mutable background,
  mutable text,
  button: buttonTypes,
};