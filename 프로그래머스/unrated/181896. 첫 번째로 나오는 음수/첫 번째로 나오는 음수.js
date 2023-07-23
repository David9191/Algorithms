function solution(num) {
    let answer = 0;

    for (; answer < num.length; answer++)
        if (num[answer] < 0) break;
    if (answer === num.length) return -1;
    return answer;
}