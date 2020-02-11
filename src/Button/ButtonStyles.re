open Emotion;

let default = (~theme: ThemeTypes.theme) => [%css
  [
    color(`hex(theme.colors.common.black)),
    margin(`rem(0.5)),
    padding2(`rem(0.5), `rem(1.5)),
    borderRadius(`rem(2.)),
    fontSize(`rem(1.)),
    borderStyle(`none),
    cursor(`pointer),
    backgroundColor(`hex(theme.action.default)),
    fontWeight(600),
    /* focus */
    focus([outline(`rem(0.), `solid, `hex(theme.colors.primary.main))]),
    /* hover */
    hover([backgroundColor(`hex(Colors.grey.light))]),
  ]
];

let primary = (~theme: ThemeTypes.theme) => [%css
  [
    color(`hex(theme.colors.primary.contrastText)),
    borderStyle(`none),
    backgroundColor(`hex(theme.colors.primary.main)),
    /* hover */
    hover([backgroundColor(`hex(theme.colors.primary.light))]),
  ]
];

let secondary = (~theme: ThemeTypes.theme) => [%css
  [
    color(`hex(theme.colors.secondary.contrastText)),
    borderStyle(`none),
    backgroundColor(`hex(theme.colors.secondary.main)),
    /* hover */
    hover([backgroundColor(`hex(theme.colors.secondary.light))]),
  ]
];

let disabled = (~theme: ThemeTypes.theme) => [%css
  [
    color(`hex(theme.colors.grey.main)),
    borderStyle(`none),
    backgroundColor(`hex(theme.colors.grey.light)),
    cursor(`notAllowed),
    /* hover */
    hover([backgroundColor(`hex(theme.colors.grey.light))]),
  ]
];