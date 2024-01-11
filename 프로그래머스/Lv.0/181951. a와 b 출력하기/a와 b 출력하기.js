const readline = require('readline');
const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});

let input = [];

rl.on('line', function (line) {
    input = line.split(' ');
    console.log(`a = ${input[0]}\nb = ${input[1]}`)
}).on('close', function () {
    // console.log(Number(input[0]) + Number(input[1]));
});