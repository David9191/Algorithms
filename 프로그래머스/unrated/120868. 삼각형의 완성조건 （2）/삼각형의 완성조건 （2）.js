function solution(sides) {
    let max = Math.max(...sides);
    let min = Math.min(...sides);
    let answer = 0;

    if (max - min === 1) return 1;
    answer = (max - (max - min)) + (min - 1);
    return answer;
}