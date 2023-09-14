function sum(arr) {
    let n = 0;

    for (let v of arr)
        n += v;

    return n;
}

function solution(arr1, arr2) {
    let answer = 0;

    if (arr1.length > arr2.length ||
        ((arr1.length === arr2.length) && (sum(arr1) > sum(arr2)))) answer = 1;
    else if (arr1.length < arr2.length ||
        ((arr1.length === arr2.length) && (sum(arr1) < sum(arr2)))) answer = -1;
    else answer = 0;

    return answer;
}