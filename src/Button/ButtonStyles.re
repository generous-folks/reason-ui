open Emotion;

let default = (~theme: ThemeTypes.theme) => [%css
  [
    color(`hex(theme.text.default)),
    margin(`rem(0.5)),
    borderRadius(`rem(2.)),
    fontSize(`rem(1.)),
    borderColor(`hex(theme.button.default)),
    cursor(`pointer),
    backgroundColor(`hex(theme.background.default)),
    fontWeight(600),
  ]
];

let primary = (~theme: ThemeTypes.theme) => [%css
  [
    color(`hex(theme.text.primary)),
    backgroundColor(`hex(theme.button.primary)),
  ]
];