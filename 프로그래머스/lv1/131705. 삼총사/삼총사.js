function solution(number) {
    const len = number.length;
    let answer = 0;

    for (let i = 0; i < len; i++)
        for (let k = i + 1; k < len; k++)
            for (let z = k + 1; z < len; z++)
                if (number[i] + number[k] + number[z] === 0) answer++;
    return answer;
}