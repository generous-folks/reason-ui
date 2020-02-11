let default = {"title": "Button", "excludeStories": [|"$$default"|]};

let primary = () =>
  <ThemeProvider> <Button> {React.string("Hello")} </Button> </ThemeProvider>;