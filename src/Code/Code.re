open Emotion;

let default = [%css [
  padding2(`rem(0.5), `rem(1.)),
  fontFamily("Courier"),
  border(`px(1),`solid,`hex("aaaaaa")),
  color(`hex("555555")),
  backgroundColor(`hex("fafafa")),
  border(`px(1),`solid,`hex("999999")),
  borderRadius(`px(2)),
]];

[@react.component]
let make = (~children) => {
  <div className=Cx.merge([|default|]) >
    children
  </div>
};
