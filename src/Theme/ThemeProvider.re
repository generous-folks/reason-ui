type actions =
  | LightTheme(ThemeTypes.theme)
  | DarkTheme(ThemeTypes.theme)
  | Mode(ThemeTypes.mode);

let reducer = (state, action) =>
  switch (action) {
  | LightTheme(theme) => {...state, lightTheme: theme}
  | DarkTheme(theme) => {...state, darkTheme: theme}
  | Mode(mode) => {mode: mode}
  };

[@react.component]
let make = (~children) => {
  let (state, dispatch) =
    React.useReducer(
      reducer,
      {lightTheme: Theme.light, darkTheme: Theme.light, mode: Light},
    );

  <ThemeContextProvider value=(state, dispatch)>
    children
  </ThemeContextProvider>;
};