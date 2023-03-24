const fs = require('fs');
const input = fs.readFileSync('/dev/stdin').toString().trim().split('\n')[1].split(' ').map(i=>+i);
let cnt = 0;

const isPrime = function (n) {
    if (n < 2)
        return false;
    for (let i = 2; i * i <= n; i++)
        if (n % i === 0)
            return false;
    return true;
}

for (let i of input)
    if (isPrime(i))
        cnt++;
console.log(cnt);