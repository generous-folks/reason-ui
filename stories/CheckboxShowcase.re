open BsStorybook.Story;
open BsStorybook.Knobs;

let _module = [%bs.raw "module"];
storiesOf("Checkbox", _module)
->addDecorator(withKnobs)
->add("Default", () =>
    <Checkbox disabled={boolean(~label="Disabled", ~defaultValue=false, ())}>
      <Typography size=Typography.Small>
        {React.string(text(~label="Label", ~defaultValue="Click me !", ()))}
      </Typography>
    </Checkbox>
  )
->add("Checked", () =>
    <Checkbox
      checked={boolean(~label="Checked", ~defaultValue=true, ())}
      disabled={boolean(~label="Disabled", ~defaultValue=false, ())}>
      <Typography size=Typography.Small>
        {React.string(
           text(~label="Label", ~defaultValue="I am controlled", ()),
         )}
      </Typography>
    </Checkbox>
  );