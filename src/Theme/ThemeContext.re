type buttonTypes = {
  primary: string,
  secondary: string,
  default: string,
  accent: string,
  disabled: string,
};

type colors = {
  primary: string,
  secondary: string,
  default: string,
  accent: string,
};

type background = {
  primary: string,
  secondary: string,
  default: string,
  accent: string,
  disabled: string,
};

type text = {
  primary: string,
  secondary: string,
  default: string,
  accent: string,
  disabled: string,
};

type themeTypes = {
  mutable mode: string,
  mutable colors,
  mutable background,
  mutable text,
  button: buttonTypes,
};

let theme = {
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

let themeContext = React.createContext(theme: themeTypes);
let useTheme = () => React.useContext(themeContext);