type t = {
  style: Border.Style.t,
  color: Border.Color.t,
  width: Border.Width.t,
};

let toCss =
  fun
  | {style, color, width} => [
      Css.borderColor(Colors.toCss(color)),
      Css.borderStyle(Border.Style.toCss(style)),
      ...Border.Width.toCss(width),
    ];