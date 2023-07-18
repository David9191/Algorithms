function solution(arr, k) {
    let answer = [];

    if (k % 2 === 0) answer = arr.map(a=>a+k);
    else answer = arr.map(a=>a*k);
    return answer;
}