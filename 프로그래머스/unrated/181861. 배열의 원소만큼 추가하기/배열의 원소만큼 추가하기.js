function solution(arr) {
    const X = [];
    
    for (let i = 0; i < arr.length; i++) {
        for (let k = 0; k < arr[i]; k++) {
            X.push(arr[i]);
        }
    }
    return X;
}