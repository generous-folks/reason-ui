let default = {
  "title": "Typo",
  "excludeStories": [|"$$default", "content"|],
};

let content = React.string("Hello World");

let normal = () =>
  <ThemeContextProvider value=ThemeContext.initialContext>
    <Typography size=Typography.Large> content </Typography>
    <Typography size=Typography.Medium> content </Typography>
    <Typography size=Typography.Small> content </Typography>
  </ThemeContextProvider>;
let primary = () =>
  <ThemeContextProvider value=ThemeContext.initialContext>
    <Typography primary=true size=Typography.Large> content </Typography>
    <Typography primary=true size=Typography.Medium> content </Typography>
    <Typography primary=true size=Typography.Small> content </Typography>
  </ThemeContextProvider>;