let default = {"title": "Button", "excludeStories": [|"$$default"|]};

let primary = () =>
  <ThemeProvider value=ThemeContext.theme>
    <Code> {React.string("Hello")} </Code>
  </ThemeProvider>;