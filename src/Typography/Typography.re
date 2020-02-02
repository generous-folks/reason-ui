open Emotion;

type t =
  | Large
  | Medium
  | Small;

let default = [%css [fontFamily("Arial"), margin(`rem(0.5))]];

let primaryStyle = [%css [color(`hex("000088"))]];

let large = [%css [fontSize(`rem(2.))]];

let medium = [%css [fontSize(`rem(1.6))]];

let small = [%css [fontSize(`rem(1.2))]];

let getClass = size =>
  switch (size) {
  | Some(Large) => large
  | Some(Medium) => medium
  | Some(Small) => small
  | None => ""
  };

[@react.component]
let make = (~primary=false, ~size=?, ~primary=false, ~children) => {
  <span
    className={Cx.merge([|
      default,
      getClass(size),
      primary ? primaryStyle : "",
    |])}>
    children
  </span>;
};