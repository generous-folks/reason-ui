let getCss = textStyle => {
  switch (Theme.Typography.toComponent(textStyle)) {
  | {color, weight, size, family} => [
      Css.color(Colors.toCss(color)),
      Css.fontWeight(Fonts.Weight.toCss(weight)),
      Css.fontSize(Fonts.Size.toCss(size)),
      Css.fontFamily(Fonts.Family.toCss(family)),
    ]
  };
};

[@react.component]
let make = (~textStyle, ~children) => {
  let className = getCss(textStyle)->Css.style;

  <span className> children </span>;
};