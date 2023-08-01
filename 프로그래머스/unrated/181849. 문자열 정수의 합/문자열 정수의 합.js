function solution(num_str) {
    let answer = 0;

    num_str.split('').map(v=>{
        const num = Number(v);
        answer += num;
    })
    return answer;
}