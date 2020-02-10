let light: ThemeTypes.theme = {
  mode: Light,
  colors: {
    common: Colors.common,
    primary: Colors.indigo,
    secondary: Colors.fuschia,
    error: Colors.error,
    warning: Colors.orange,
    info: Colors.lightblue,
    success: Colors.green,
    grey: Colors.grey,
  },
  background: {
    primary: Colors.common.white,
    secondary: Colors.common.black,
    default: Colors.common.white,
    accent: "123456",
    disabled: "fafafa",
  },
  action: {
    primary: "000088",
    secondary: "ffff88",
    default: Colors.common.white,
    disabled: "575757",
  },
  text: {
    primary: "000088",
    secondary: "ffff88",
    default: Colors.common.black,
    hint: "123456",
    disabled: "575757",
  },
};

let dark: ThemeTypes.theme = {
  mode: Dark,
  colors: {
    common: Colors.common,
    primary: Colors.fuschia,
    secondary: Colors.indigo,
    error: Colors.error,
    warning: Colors.orange,
    info: Colors.lightblue,
    success: Colors.green,
    grey: Colors.grey,
  },
  background: {
    primary: Colors.common.white,
    secondary: Colors.common.black,
    default: Colors.common.white,
    accent: "123456",
    disabled: "fafafa",
  },
  action: {
    primary: "000088",
    secondary: "ffff88",
    default: Colors.common.white,
    disabled: "575757",
  },
  text: {
    primary: "ffff88",
    secondary: "000088",
    default: Colors.common.black,
    hint: "123456",
    disabled: "575757",
  },
};