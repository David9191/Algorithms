const 약수개수짝수 = (num) => {
    let count = 0;

    for (let i = 1; i <= num; i++)
        if (num % i === 0) count++;
    if (count % 2 === 0) return 1;
    return 0;
}

function solution(left, right) {
    let answer = 0;

    for (let i = left; i <= right; i++) {
        if (약수개수짝수(i) === 1) answer += i;
        else answer -= i;
    }
    return answer;
}