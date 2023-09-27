const arr = require('fs').readFileSync('/dev/stdin').toString().trim().split('\n').map(v => v.split(' '));
let max = 0, maxX = 1, maxY = 1;

for (let i = 0; i < arr.length; i++) {
    for (let k = 0; k < arr[i].length; k++) {
        const n = Number(arr[i][k]);
        if (n > max) {
            max = n;
            maxX = i + 1;
            maxY = k + 1;
        }
    }
}

console.log(max);
console.log(`${maxX} ${maxY}`);