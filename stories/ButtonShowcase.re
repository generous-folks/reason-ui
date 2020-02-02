let default = {"title": "Button", "excludeStories": [|"$$default"|]};

let primary = () => <Button primary=false> {React.string("Hello")} </Button>;