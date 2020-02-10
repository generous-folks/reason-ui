let reducer = (state: ThemeContext.value, action) =>
  switch (action) {
  | ThemeTypes.SetLightTheme(theme) => {...state, lightTheme: theme}
  | ThemeTypes.SetDarkTheme(theme) => {...state, darkTheme: theme}
  | ThemeTypes.SetMode(mode) => {...state, mode}
  };

[@react.component]
let make = (~children, ~value) => {
  let (state, dispatch) = React.useReducer(reducer, value);

  <ThemeContextProvider value=(state, dispatch)>
    children
  </ThemeContextProvider>;
};