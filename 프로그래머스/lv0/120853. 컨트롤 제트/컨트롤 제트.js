function solution(s) {
    let answer = 0;
    const arr = s.split(' ');
    
    arr.forEach((item, idx, arr) => {
        if (item === 'Z') answer -= +arr[idx - 1];
        else answer += +item;
    });
    return answer;
}