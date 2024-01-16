const readline = require('readline');
const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});

let input = [];

rl.on('line', function (line) {
    input = [line];
}).on('close',function(){
    str = input[0].split('')
    str = str.map(v => {
        if (v === v.toUpperCase()) v = v.toLowerCase();
        else v = v.toUpperCase();
        return v;
    }).join('')
    console.log(str);
});