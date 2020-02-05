type contextType = {
  lightTheme: ThemeTypes.theme,
  darkTheme: ThemeTypes.theme,
  mode: ThemeTypes.mode,
};

let initialContext: contextType = {
  lightTheme: Theme.light,
  darkTheme: Theme.dark,
  mode: Light,
};

let themeContext = React.createContext(initialContext);

let useTheme = () => {
  let context = React.useContext(themeContext);

  switch (context.mode) {
  | Light => context.lightTheme
  | Dark => context.darkTheme
  };
};