module Weight = {
  type t = [ | `Bold | `SemiBold | `Normal | `Light];

  let toCss =
    fun
    | `Bold => Css.bold
    | `SemiBold => Css.semiBold
    | `Normal => Css.normal
    | `Light => Css.light;
};

module Size = {
  type t = [ | `XL | `L | `M | `S];

  let toCss =
    fun
    | `XL => Css.px(32)
    | `L => Css.px(24)
    | `M => Css.px(18)
    | `S => Css.px(12);
};

module Family = {
  type t = [ | `Helvetica | `Arial | `Sans | `Roboto];

  let toCss =
    fun
    | `Helvetica => "Helvetica"
    | `Sans => "Sans"
    | `Roboto => "Roboto"
    | `Arial => "Arial";
};