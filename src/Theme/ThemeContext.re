let theme: ThemeTypes.theme = {
  mode: "dark",
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
  button: {
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

let themeContext = React.createContext(theme: ThemeTypes.theme);

let useTheme = () => React.useContext(themeContext);