let default = {"title": "Radio", "excludeStories": [|"$$default"|]};

let normal = () =>
  <Radio values=[|"Toto", "Tata", "Titi"|] defaultValue="Tata" />;