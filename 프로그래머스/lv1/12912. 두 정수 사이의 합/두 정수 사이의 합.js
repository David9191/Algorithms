function solution(a, b) {
    let bigger = a > b ? a : b, smaller = a < b ? a : b, answer = 0;
    
    for (i = bigger; i >= smaller; i--)
        answer += i;
    return answer;
}