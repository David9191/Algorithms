const fs = require('fs');
let input = fs.readFileSync('/dev/stdin').toString().trim().split('\n').map(i => i.split(' '));
let now = 0, max = 0;

for (let item of input) {
    now += item[1] - item[0];
    if (now > max) max = now;
}

console.log(max);