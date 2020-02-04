let lightTheme: ThemeTypes.theme = {
  mode: Light,
  colors: {
    common: {
      black: "000000",
      white: "ffffff",
    },
    primary: {
      main: "1976d2",
      light: "2196f3",
      dark: "1526d2",
      contrastText: "ffffff",
    },
    secondary: {
      main: "rgb(220, 0, 78)",
      light: "rgb(227, 51, 113)",
      dark: "rgb(154, 0, 54)",
      contrastText: "#fff",
    },
    error: {
      light: "#e57373",
      main: "#f44336",
      dark: "#d32f2f",
      contrastText: "#fff",
    },
    warning: {
      light: "#ffb74d",
      main: "#ff9800",
      dark: "#f57c00",
      contrastText: "rgba(0, 0, 0, 0.87)",
    },
    info: {
      light: "#64b5f6",
      main: "#2196f3",
      dark: "#1976d2",
      contrastText: "#fff",
    },
    success: {
      light: "#81c784",
      main: "#4caf50",
      dark: "#388e3c",
      contrastText: "rgba(0, 0, 0, 0.87)",
    },
    primary: "000088",
    secondary: "ffff88",
    default: "575757",
    accent: "123456",
  },
  background: {
    primary: "ffffff",
    secondary: "000000",
    default: "ffffff",
    accent: "123456",
    disabled: "fafafa",
  },
  action: {
    primary: "000088",
    secondary: "ffff88",
    default: "ffffff",
    accent: "123456",
    disabled: "575757",
  },
  text: {
    primary: "000088",
    secondary: "ffff88",
    default: "000000",
    accent: "123456",
    disabled: "575757",
  },
};

let darkTheme: ThemeTypes.theme = {
  mode: Dark,
  colors: {
    primary: "000088",
    secondary: "ffff88",
    default: "575757",
    accent: "123456",
  },
  background: {
    primary: "ffffff",
    secondary: "000000",
    default: "ffffff",
    accent: "123456",
    disabled: "fafafa",
  },
  action: {
    primary: "000088",
    secondary: "ffff88",
    default: "ffffff",
    accent: "123456",
    disabled: "575757",
  },
  text: {
    primary: "000088",
    secondary: "ffff88",
    default: "000000",
    accent: "123456",
    disabled: "575757",
  },
};

let createTheme = (~mode: ThemeTypes.mode, ~theme=?:ThemeTypes.theme) =>
  switch (mode) {
  | Light => lightTheme
  | Dark => darkTheme
  };

let themeContext = React.createContext(theme);

let useTheme = () => React.useContext(themeContext);