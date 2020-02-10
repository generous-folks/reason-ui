let reducer = (state: ThemeContext.value, action) =>
  switch (action) {
  | ThemeTypes.LightTheme(theme) => {...state, lightTheme: theme}
  | ThemeTypes.DarkTheme(theme) => {...state, darkTheme: theme}
  | ThemeTypes.Mode(mode) => {...state, mode}
  };

[@react.component]
let make = (~children, ~value) => {
  let (state, dispatch) = React.useReducer(reducer, value);

  <ThemeContextProvider value=(state, dispatch)>
    children
  </ThemeContextProvider>;
};