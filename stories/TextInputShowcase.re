open BsStorybook.Story;
open BsStorybook.Knobs;

let _module = [%bs.raw "module"];
storiesOf("TextInput", _module)
->addDecorator(withKnobs)
->add("Default", () =>
    <TextInput
      disabled={boolean(~label="Disabled", ~defaultValue=false, ())}
      label={text(~label="Label", ~defaultValue="Sushi", ())}
    />
  );