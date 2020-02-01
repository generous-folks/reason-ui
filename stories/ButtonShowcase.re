open BsStorybook.Story;

let content = React.string("Hello World");

let _module = [%bs.raw "module"];
storiesOf("Button", _module)
|. add("Default", () => <Button>content</Button>)
|. add("Primary", () => <Button primary=true>content</Button>);