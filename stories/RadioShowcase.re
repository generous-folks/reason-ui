open BsStorybook.Story;

let content = React.string("Hello World");

let _module = [%bs.raw "module"];
storiesOf("Radio", _module)
|. add("Default", () => <Radio values=[|"Toto", "Tata", "Titi"|] defaultValue="Tata" />);