open BsStorybook.Story;

let content = React.string("Hello World");

let _module = [%bs.raw "module"];
storiesOf("Checkbox", _module)
-> add("Default", () => <Checkbox />)
-> add("Checked", () => <Checkbox checked=true />);
