function solution(numbers) {
    const answer = [];

    for (let i = 0; i < numbers.length; i++) {
        for (let k = i + 1; k < numbers.length; k++) {
            const sum = numbers[i] + numbers[k];

            if (answer.indexOf(sum) === -1) answer.push(sum);
        }
    }
    return answer.sort((a,b)=>a-b);
}