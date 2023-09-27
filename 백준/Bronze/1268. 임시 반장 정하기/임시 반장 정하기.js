const init = require('fs').readFileSync('/dev/stdin').toString().trim().split('\n');
const n = Number(init[0]);
const arr = init.slice(1).map(v => v.split(' '));
const count = Array(n).fill(0);

for (let i = 0; i < n; i++) {
    for (let j = 0; j < n; j++) {
        if (i === j) continue;
        for (let k = 0; k < 5; k++) {
            if (arr[i][k] === arr[j][k]) {
                count[i]++;
                break;
            }
        }
    }
}


let max = count[0];
let maxIndex = 0;

for (let i = 0; i < n; i++) {
    if (count[i] > max) {
        max = count[i];
        maxIndex = i;
    }
}

console.log(maxIndex + 1);