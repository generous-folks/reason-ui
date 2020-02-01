open BsStorybook.Story;

let content = React.string("yarn add @generous-folks/reason-ui");

let _module = [%bs.raw "module"];
storiesOf("Code", _module)
|. add("Default", () => <Code>content</Code>);