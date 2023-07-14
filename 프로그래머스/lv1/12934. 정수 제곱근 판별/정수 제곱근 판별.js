function solution(n) {
    let answer = 0;
    
    for (i = 1; i * i <= n; i++) {
        if (i * i === n) {
            answer = (i + 1) * (i + 1);
            break;
        }
    }
    if (answer < 1) answer = -1;
    return answer;
}