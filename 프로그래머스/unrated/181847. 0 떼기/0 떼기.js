function solution(n_str) {
    let answer = '';
    let n = 0;

    for (let i = 0; i < n_str.length; i++) {
        if (n_str[i] === '0') n++;
        else break;
    }
    answer = n_str.slice(n);
    return answer;
}