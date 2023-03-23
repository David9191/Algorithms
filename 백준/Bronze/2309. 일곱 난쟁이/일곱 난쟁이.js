const fs = require('fs');
const arr = fs.readFileSync('/dev/stdin').toString().trim().split('\n').map(n => +n);
const sum = arr.reduce((acc, now) => acc + now, 0);
let rtnArr = [];

end:
for (let i = 0; i < arr.length - 1; i++) {
    for(let k = i + 1; k < arr.length; k++)  {
        if (sum - arr[i] - arr[k] === 100) {
            rtnArr = arr.filter((n, index) => index !== i && index !== k);
            break end;
        }
    }
}

console.log(rtnArr.sort((a, b) => a - b).join('\n'));