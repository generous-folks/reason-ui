

[@react.component]
let make = (~children) => {

  let (lightTheme, setLightTheme) = React.useState(_ => Theme.light);
  let (darkTheme, setDarkTheme) = React.useState(_ => Theme.dark);
  let (mode, setMode) = React.useState(_ => Theme.lightMode);

  let setTheme = (~mode, ~theme) =>
    switch (mode) {
    | ThemeTypes.Light => setMode(theme)
    | ThemeTypes.Dark => setMode(theme)
	};
	
	let state : ThemeContext.value = {lightTheme, darkTheme, mode}

  <ThemeContextProvider
    value=(state, setTheme)>
    children
  </ThemeContextProvider>
};