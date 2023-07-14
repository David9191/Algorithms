const fs = require('fs');
const input = fs.readFileSync('/dev/stdin').toString().trim().split(' ');
const n = +input[0], k = +input[1], arr = [];

for (let i = 1; i <= n; i++)
    if (n % i === 0) arr.push(i);

console.log(arr[k - 1] ? arr[k - 1] : 0 );