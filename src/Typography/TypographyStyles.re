open Emotion;

let large = [%css [fontSize(`rem(2.))]];

let medium = [%css [fontSize(`rem(1.6))]];

let small = [%css [fontSize(`rem(1.2))]];

let default = (~theme: ThemeContext.themeTypes) => [%css
  [
    color(`hex(theme.text.default)),
    fontFamily("Arial"),
    margin(`rem(0.5)),
  ]
];

let primary = (~theme: ThemeContext.themeTypes) => [%css
  [color(`hex(theme.text.primary))]
];