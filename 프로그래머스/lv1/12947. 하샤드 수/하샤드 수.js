const sumEach = (n) => {
    let num = 0;
    
    while (n > 0) {
        num += n % 10;
        n = ~~(n / 10);
    }
    return num;
}

function solution(x) {
    const sumNum = sumEach(x);
    let answer = true;
    
    if (x % sumNum !== 0) answer = false;
    return answer;
}