const fs = require('fs');
const input = fs.readFileSync('/dev/stdin').toString().trim().split('\n').map(Number);
const iter = input[0];
let rtnStr = '';

for (let i = 0; i < iter; i++) {
    const bin = input[i + 1].toString(2);
    let arr = [];
    for (let k = bin.length - 1; k > -1; k--)
        if (bin[k] === '1') arr.push((bin.length - 1) - k);
    rtnStr += arr.join(' ') + '\n';
}
console.log(rtnStr.trim());