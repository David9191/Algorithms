const fs = require('fs');
const arr = fs.readFileSync('/dev/stdin').toString().trim().split('\n').map(n => n.split(' ').map(n => +n));
arr.shift();

for (let i of arr)
    console.log(i.sort((a, b) => a - b)[i.length - 3]);