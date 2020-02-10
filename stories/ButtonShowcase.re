let default = {"title": "Button", "excludeStories": [|"$$default"|]};

let primary = () =>
  <ThemeContextProvider value=ThemeContext.initialContext>
    <Code> {React.string("Hello")} </Code>
  </ThemeContextProvider>;