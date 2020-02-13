module Style = {
  type t = [ | `Solid | `Dashed];

  let toCss =
    fun
    | `Solid => Css.solid
    | `Dashed => Css.dashed;
};

module Width = {
  type t = [
    | `BorderWidth(int)
    | `BorderWidth2(int, int)
    | `BorderWidth4(int, int, int, int)
  ];

  let toCss =
    fun
    | `BorderWidth(a) => [Css.borderWidth(Css.px(a))]
    | `BorderWidth2(a, b) => [
        Css.borderTopWidth(Css.px(a)),
        Css.borderRightWidth(Css.px(b)),
        Css.borderBottomWidth(Css.px(a)),
        Css.borderLeftWidth(Css.px(b)),
      ]
    | `BorderWidth4(a, b, c, d) => [
        Css.borderTopWidth(Css.px(a)),
        Css.borderRightWidth(Css.px(b)),
        Css.borderBottomWidth(Css.px(c)),
        Css.borderLeftWidth(Css.px(d)),
      ];
};

module Color = {
  type t = Colors.color;

  let toCss = Colors.toCss;
};