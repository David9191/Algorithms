function solution(num_list) {
    const len = num_list.length - 1;
    const answer = num_list.slice();

    if (num_list[len] > num_list[len - 1])
        answer.push(num_list[len] - num_list[len - 1])
    else
        answer.push(num_list[len] * 2);
    return answer;
}