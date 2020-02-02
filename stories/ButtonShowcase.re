let default = {"title": "Button", "excludeStories": [|"$$default"|]};

let primary = () =>
  <ThemeProvider value=ThemeContext.theme>
    <Button primary=false> {React.string("Hello")} </Button>
  </ThemeProvider>;