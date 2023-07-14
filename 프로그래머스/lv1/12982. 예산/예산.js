function solution(d, budget) {
    const arr = d.sort((a,b)=>a-b);
    let cnt = 0;

    for (let i = 0; i < arr.length; i++) {
        if (budget - arr[i] >= 0) {
            budget -= arr[i];
            cnt++;
        }
    }
    return cnt;
}