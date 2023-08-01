function solution(my_string, alp) {
    let answer = '';

    for (let i = 0; i < my_string.length; i++) {
        if (my_string[i] === alp) {
            answer += alp.toUpperCase();
            continue;
        }
        answer += my_string[i];
    }
    return answer;
}