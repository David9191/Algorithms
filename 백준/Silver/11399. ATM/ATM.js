const input = require('fs').readFileSync('/dev/stdin').toString().trim().split('\n')[1].split(' ').sort((a, b)=>a-b).map(i=>+i);
let arr = [];
let total = 0;

for (let i = 0; i < input.length; i++)
    arr[i] = (i !== 0 ? arr[i - 1] : 0) + input[i];

console.log(arr.reduce((acc, cur)=>acc+cur, 0));