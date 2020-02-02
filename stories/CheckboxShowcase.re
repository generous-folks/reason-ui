open BsStorybook.Story;
open BsStorybook.Knobs;

let _module = [%bs.raw "module"];
storiesOf("Checkbox", _module)
->addDecorator(withKnobs)
->add("Default", () =>
    <Checkbox
      label={text(~label="Label", ~defaultValue="Click me !", ())}
      disabled={boolean(~label="Disabled", ~defaultValue=false, ())}
    />
  )
->add("Checked", () =>
    <Checkbox
      checked=true
      label={text(
        ~label="Label",
        ~defaultValue="I am checked and controlled",
        (),
      )}
      disabled={boolean(~label="Disabled", ~defaultValue=false, ())}
    />
  );