function solution(arr, idx) {
    let answer = 0;
    let i = 0;
    
    for (i = idx; i < arr.length; i++) {
        if (arr[i] === 1) {
            answer = i;
            break;
        }
    }
    if (i >= arr.length) return -1;
    return answer;
}