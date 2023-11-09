function solution(numbers, k) {
    const len = numbers.length;
    let answer = 1;

    for (let i = 1; i < k; i++) {
        answer += 2;
        if (answer > len) {
            answer -= len;
        }
    }
    return answer;
}