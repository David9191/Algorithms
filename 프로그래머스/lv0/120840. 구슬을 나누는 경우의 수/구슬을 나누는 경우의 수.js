function fact(num) {
    let n = BigInt(1);

    for (let i = 1; i <= num; i++) {
        n *= BigInt(i);
    }
    return n;
}

function solution(balls, share) {
    let answer = fact(balls) / (fact(balls - share) * fact(share));

    return answer;
}