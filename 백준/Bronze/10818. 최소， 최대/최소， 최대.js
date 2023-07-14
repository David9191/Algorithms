const fs = require('fs');
let input = fs.readFileSync('/dev/stdin').toString().trim().split('\n')[1].split(' ').map(Number);

const min = Math.min(...input);
const max = Math.max(...input);
console.log(min, max);