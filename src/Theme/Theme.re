module Typography = {
  type t = {
    color: Colors.color,
    weight: Fonts.Weight.t,
    size: Fonts.Size.t,
    family: Fonts.Family.t,
  };

  type textStyle =
    | Title
    | Subtitle
    | Paragraph;

  let toComponent: textStyle => t =
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
};