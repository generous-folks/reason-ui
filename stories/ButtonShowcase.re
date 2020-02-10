let default = {"title": "Button", "excludeStories": [|"$$default"|]};

let primary = () =>
  <ThemeProvider> <Code> {React.string("Hello")} </Code> </ThemeProvider>;