open BsStorybook.Story;

let content = React.string("Hello World");

let _module = [%bs.raw "module"];
storiesOf("Typography", _module)
|. add("Default", () => <>
    <Typography size=Typography.Large>content</Typography>
    <Typography size=Typography.Medium>content</Typography>
    <Typography size=Typography.Small>content</Typography>
  </>)
|. add("Primary", () => <>
    <Typography primary=true size=Typography.Large>content</Typography>
    <Typography primary=true size=Typography.Medium>content</Typography>
    <Typography primary=true size=Typography.Small>content</Typography>
  </>);