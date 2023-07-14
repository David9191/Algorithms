const fs = require('fs');
const input = fs.readFileSync('/dev/stdin').toString().trim().split(' ').map(i=>+i);
let result = 0;
let arr = [];

for (let i = 1; i <= 45; i++)
    for (let k = 0; k < i; k++)
        arr.push(i);

for (let i = input[0] - 1; i <= input[1] - 1; i++)
    result += arr[i];
console.log(result);