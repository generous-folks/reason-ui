let default = {"title": "Button", "excludeStories": [|"$$default"|]};

let primary = () =>
  <ThemeProvider value=ThemeContext.initialContext>
    <Code> {React.string("Hello")} </Code>
  </ThemeProvider>;