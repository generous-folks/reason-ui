type textStyle =
  | Title
  | Subtitle
  | Paragraph;

type text = {
  color: Colors.color,
  weight: Fonts.Weight.t,
  size: Fonts.Size.t,
  family: Fonts.Family.t,
};

let kindToText =
  fun
  | Title => {
      color: Red(Normal),
      weight: Fonts.Weight.Bold,
      size: Fonts.Size.XL,
      family: Fonts.Family.Helvetica,
    }
  | Subtitle => {
      color: Green(Normal),
      weight: Fonts.Weight.Normal,
      size: Fonts.Size.M,
      family: Fonts.Family.Arial,
    }
  | Paragraph => {
      color: Blue(Normal),
      weight: Fonts.Weight.Light,
      size: Fonts.Size.S,
      family: Fonts.Family.Arial,
    };

let getCss = kind => {
  switch (kindToText(kind)) {
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