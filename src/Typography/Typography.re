type t = {
  color: Colors.color,
  fontWeight: Fonts.Weight.t,
  fontSize: Fonts.Size.t,
  fontFamily: Fonts.Family.t,
};

type textStyle =
  | Title
  | Subtitle
  | Paragraph;

let toCss = a => {
  switch (a) {
  | {color, fontWeight, fontSize, fontFamily} => [
      Css.color(Colors.toCss(color)),
      Css.fontWeight(Fonts.Weight.toCss(fontWeight)),
      Css.fontSize(Fonts.Size.toCss(fontSize)),
      Css.fontFamily(Fonts.Family.toCss(fontFamily)),
    ]
  };
};

let toComponent: textStyle => t =
  fun
  | Title => {
      color: `Red(`Normal),
      fontWeight: `Bold,
      fontSize: `XL,
      fontFamily: `Helvetica,
    }
  | Subtitle => {
      color: `Green(`Normal),
      fontWeight: `Normal,
      fontSize: `M,
      fontFamily: `Arial,
    }
  | Paragraph => {
      color: `Blue(`Normal),
      fontWeight: `Light,
      fontSize: `S,
      fontFamily: `Arial,
    };

[@react.component]
let make = (~textStyle, ~children) => {
  let className = toCss(toComponent(textStyle))->Css.style;

  <span className> children </span>;
};