const { sprintf } = require('sprintf');

module.exports = {
    helpers: {
        map: (arr, templateString) => arr.map(value => sprintf(value, templateString)),
    }
}