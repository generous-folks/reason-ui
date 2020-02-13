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

let toCss =
  fun
  | {color, fontWeight, fontSize, fontFamily} => [
      Css.color(Colors.toCss(color)),
      Css.fontWeight(Fonts.Weight.toCss(fontWeight)),
      Css.fontSize(Fonts.Size.toCss(fontSize)),
      Css.fontFamily(Fonts.Family.toCss(fontFamily)),
    ];

let toComponent =
  fun
  | Title => {
      color: `Gray(`Normal),
      fontWeight: `Light,
      fontSize: `XL,
      fontFamily: `Helvetica,
    }
  | Subtitle => {
      color: `Gray(`Dark),
      fontWeight: `Normal,
      fontSize: `L,
      fontFamily: `Arial,
    }
  | Paragraph => {
      color: `Gray(`Dark),
      fontWeight: `Light,
      fontSize: `M,
      fontFamily: `Arial,
    };

[@react.component]
let make = (~textStyle, ~children) => {
  let className = toCss(toComponent(textStyle))->Css.style;

  <span className> children </span>;
};