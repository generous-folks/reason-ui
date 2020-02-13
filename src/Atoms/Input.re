[@react.component]
let make = () => {
  let className =
    (
      Box.toCss({
        style: `Solid,
        width: `BorderWidth(2),
        color: `Red(`Normal),
      })
      @ Typography.toComponent(Typography.Subtitle)->Typography.toCss
    )
    ->Css.style;

  <input className />;
};