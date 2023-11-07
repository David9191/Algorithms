function solution(my_string) {
    const arr = my_string.split(' ');
    let answer = arr[0] * 1;

    for (let i = 1; i < arr.length; i += 2) {
        const sign = arr[i];
        const num = arr[i + 1] * 1;

        if (sign === '+') {
            answer += num;
        } else {
            answer -= num;
        }
    }
    return answer;
}