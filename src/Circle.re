// <Circle cx="50" cy="50" r="30" fill="yellow" />

[@react.component] [@bs.module "react-native-svg"]
external make:
  (~cx: string, ~cy: string, ~r: string, ~fill: string) => React.element =
  "Circle";
