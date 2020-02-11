let default = {"title": "Button", "excludeStories": [|"$$default"|]};

let normal = () =>
  <ThemeProvider>
    <Button variant=Customize.Default> {React.string("Hello")} </Button>
  </ThemeProvider>;

let primary = () =>
  <ThemeProvider>
    <Button variant=Customize.Primary> {React.string("Hello")} </Button>
  </ThemeProvider>;