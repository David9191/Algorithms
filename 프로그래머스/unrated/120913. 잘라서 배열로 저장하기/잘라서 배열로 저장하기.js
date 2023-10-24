function solution(my_str, n) {
    const answer = [];

    for (let i = 0; i < my_str.length; i+=n) {
        const a = my_str.slice(i, i+n)
        answer.push(a);
    }
    return answer;
}