open Emotion;

let mergeStyles = (~customClassName="", ~originalClassName) =>
  Cx.merge([|originalClassName, customClassName|]);