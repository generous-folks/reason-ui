let default = {
  "title": "Typo",
  "excludeStories": [|"$$default", "content"|],
};

let content = React.string("Hello World");

let normal = () =>
  <React.Fragment>
    <Typography textStyle=Theme.Typography.Title> content </Typography>
    <Typography textStyle=Theme.Typography.Subtitle> content </Typography>
    <Typography textStyle=Theme.Typography.Paragraph> content </Typography>
  </React.Fragment>;