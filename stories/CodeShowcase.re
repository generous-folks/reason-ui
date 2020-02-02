open BsStorybook.Story;
open BsStorybook.Knobs;

let _module = [%bs.raw "module"];
storiesOf("Code", _module)
->addDecorator(withKnobs)
->add("Default", () =>
    <Code>
      {React.string(
         text(
           ~label="Content",
           ~defaultValue="yarn add @generous-folks/reason-ui",
           (),
         ),
       )}
    </Code>
  );