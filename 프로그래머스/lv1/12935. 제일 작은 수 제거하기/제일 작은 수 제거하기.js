// 최솟값 구하기.
// 최솟값이 아니라면 push
// 빈 배열이라면 -1 push

function solution(arr) {
    const answer = [];
    const min = Math.min(...arr);

    for (let i = 0; i < arr.length; i++)
        if (arr[i] !== min) answer.push(arr[i]);
    if (answer.length === 0) answer.push(-1);
    return answer;
}