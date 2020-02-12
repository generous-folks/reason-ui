let default = {
  "title": "Button",
  "component": Button.make,
  "excludeStories": [|"$$default"|],
};

let primary = () =>
  <ThemeProvider> <Button> {React.string("Hello")} </Button> </ThemeProvider>;