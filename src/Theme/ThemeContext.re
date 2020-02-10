type dispatch = ThemeTypes.actions => unit;

type value = {
  lightTheme: ThemeTypes.theme,
  darkTheme: ThemeTypes.theme,
  mode: ThemeTypes.mode,
};

type contextType = (value, dispatch);

let initialValue = {
  lightTheme: Theme.light,
  darkTheme: Theme.dark,
  mode: Light,
};

let initialContext: contextType = (
  {lightTheme: Theme.light, darkTheme: Theme.dark, mode: Light},
  _ => ignore(),
);

let themeContext = React.createContext(initialContext);

let useTheme = () => {
  let ({mode, lightTheme, darkTheme}, _dispatch) =
    React.useContext(themeContext);

  switch (mode) {
  | Light => lightTheme
  | Dark => darkTheme
  };
};

let useThemeDispatch = () => {
  let (_, dispatch) = React.useContext(themeContext);

  dispatch;
};