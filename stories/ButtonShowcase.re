let default = {"title": "Button", "excludeStories": [|"$$default"|]};

let normal = () =>
  <ThemeProvider> <Button> {React.string("Hello")} </Button> </ThemeProvider>;

let primary = () =>
  <ThemeProvider>
    <Button variant=Variants.Primary> {React.string("Hello")} </Button>
  </ThemeProvider>;

let secondary = () =>
  <ThemeProvider>
    <Button variant=Variants.Secondary> {React.string("Hello")} </Button>
  </ThemeProvider>;

let disabled = () =>
  <ThemeProvider>
    <Button variant=Variants.Disabled> {React.string("Hello")} </Button>
  </ThemeProvider>;