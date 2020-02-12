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
      color: `Red(`Normal),
      weight: `Bold,
      size: `XL,
      family: `Helvetica,
    }
  | Subtitle => {
      color: `Green(`Normal),
      weight: `Normal,
      size: `M,
      family: `Arial,
    }
  | Paragraph => {
      color: `Blue(`Normal),
      weight: `Light,
      size: `S,
      family: `Arial,
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