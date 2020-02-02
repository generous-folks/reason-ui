open BsStorybook.Story;
open BsStorybook.Knobs;

let _module = [%bs.raw "module"];
storiesOf("Button", _module)
->addDecorator(withKnobs)
->add("Default", () =>
    <Button primary={boolean(~label="Primary", ~defaultValue=false, ())}>
      {React.string(text(~label="Text", ~defaultValue="Hello World", ()))}
    </Button>
  );