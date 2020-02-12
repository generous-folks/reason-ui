type nuance = [ | `Light | `Normal | `Dark];

type color = [ | `Red(nuance) | `Green(nuance) | `Blue(nuance)];

let toCss =
  fun
  | `Red(_) => Css.red
  | `Green(_) => Css.green
  | `Blue(_) => Css.blue;