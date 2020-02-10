let default = {"title": "Button", "excludeStories": [|"$$default"|]};

let primary = () =>
  <ThemeProvider value=ThemeContext.initialValue>
    <Code> {React.string("Hello")} </Code>
  </ThemeProvider>;