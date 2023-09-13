function solution(arr, n) {
    let answer = [];

    if (arr.length % 2 === 0) answer = arr.map((v, i) => i % 2 !== 0 ? v + n : v);
    else answer = arr.map((v, i) => i % 2 === 0 ? v + n : v);

    return answer;
}