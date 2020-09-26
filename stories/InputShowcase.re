let default = {
  "title": "Input",
  "excludeStories": [|"$$default", "content"|],
};

let content = React.string("Hello World");

let normal = () => <Input />;