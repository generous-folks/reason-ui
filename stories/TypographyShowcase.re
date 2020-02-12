let default = {
  "title": "Typo",
  "excludeStories": [|"$$default", "content"|],
};

let content = React.string("Hello World");

let normal = () =>
  <React.Fragment>
    <Typography textStyle=Typography.Title> content </Typography>
    <Typography textStyle=Typography.Subtitle> content </Typography>
    <Typography textStyle=Typography.Paragraph> content </Typography>
  </React.Fragment>;