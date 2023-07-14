const fs = require('fs');
const input = fs.readFileSync('/dev/stdin').toString().trim().split('\n').map(i=>+i);
let arr = [];

const isPrime = function (n) {
    if (n < 2) return 0;
    for (let i = 2; i * i <= n; i++) if (n % i === 0) return 0
    return 1;
}

for (let i = input[0]; i <= input[1]; i++) if (isPrime(i)) arr.push(i);

if (!arr.length) { console.log(-1); return 0; }
console.log(arr.reduce((acc, now) => acc + now));
console.log(arr.sort((a, b) => a - b)[0]);