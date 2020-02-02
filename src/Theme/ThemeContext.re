type buttonTypes = {
  disabled: string,
  backgroundColor: string,
};

type themeTypes = {
  mutable mode: string,
  primary: string,
  secondary: string,
  accent: string,
  textPrimary: string,
  button: buttonTypes,
};

let theme = {
  mode: "dark",
  primary: "000088",
  secondary: "ffff88",
  accent: "cccccc",
  textPrimary: "000000",
  button: {
    disabled: "000000",
    backgroundColor: "000000",
  },
};

let themeContext = React.createContext(theme: themeTypes);
let useTheme = () => React.useContext(themeContext);