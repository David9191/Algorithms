function solution(numbers, n) {
    let answer = 0;
 
    numbers.map(a => {
        if (answer > n) return answer;
        answer += a;
    })
    return answer;
}