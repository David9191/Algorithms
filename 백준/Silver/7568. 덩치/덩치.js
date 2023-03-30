const input = require('fs').readFileSync('/dev/stdin').toString().trim().split('\n').map(i=>i.split(' ').map(i=>+i));
const rtnArr = [];
let length = input.splice(0, 1);

for (let i = 0; i < length; i++) {
    let bigger = 0;
    for (let k = 0; k < length; k++)
        if (input[i][0] < input[k][0] && input[i][1] < input[k][1]) bigger++;
    rtnArr.push(bigger + 1);
}

console.log(rtnArr.join(' '));