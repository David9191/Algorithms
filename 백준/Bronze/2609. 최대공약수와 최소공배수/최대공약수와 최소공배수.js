const fs = require('fs');
const arr = fs.readFileSync('/dev/stdin').toString().trim().split(' ').map(n => +n);
const min = arr[0] > arr[1] ? arr[1] : arr[0];
let choidae = 0, choiso = 0;

for (let i = 1; i <= min; i++)
    if (arr[0] % i === 0 && arr[1] % i === 0)
        choidae = i;
for (let i = 1; ; i++)
    if (choidae * i % arr[0] === 0 && choidae * i % arr[1] === 0) {
        choiso = choidae * i;
        break;
    }

console.log(`${choidae}\n${choiso}`);