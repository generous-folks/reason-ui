let default = {
  "title": "Typo",
  "excludeStories": [|"$$default", "content", "title", "subtitle"|],
};

let title = React.string("Hi ReasonML");
let subtitle = React.string("I'm really happy to present ReasonML to you");
let content = React.string("Let's talk about our components");

let normal = () =>
  <>
    <Typography textStyle=Typography.Title> title </Typography>
    <br />
    <Typography textStyle=Typography.Subtitle> subtitle </Typography>
    <br />
    <Typography textStyle=Typography.Paragraph> content </Typography>
    <br />
  </>;