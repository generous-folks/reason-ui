open BsStorybook.Story;

let label = "Hello World";

let _module = [%bs.raw "module"];
storiesOf("Checkbox", _module)
-> add("Default", () => <Checkbox label />)
-> add("Checked", () => <Checkbox checked=true label />);
