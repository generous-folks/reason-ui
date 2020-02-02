let default = {"title": "Checkbox", "excludeStories": [|"$$default"|]};

let uncontrolled = () =>
  <Checkbox disabled=false>
    <Typography size=Typography.Small>
      {React.string("Hi there !")}
    </Typography>
  </Checkbox>;

let controlled = () =>
  <Checkbox checked=true disabled=false>
    <Typography size=Typography.Small>
      {React.string("I am controlled")}
    </Typography>
  </Checkbox>;