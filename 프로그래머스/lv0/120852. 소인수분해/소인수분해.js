function isPrime(n) {
    let rtn = 1;

    for (let i = 2; i * i <= n; i++)
        if (n % i === 0) {
            rtn = 0;
            break;
        }
    return rtn;
}

function solution(n) {
    let answer = [];
    
    for (let i = 2; i <= n; i++)
        if (n % i === 0 && isPrime(i))
            answer.push(i);

    return answer;
}