function solution(num_list) {
    let a = 1, b = 0;

    for (let i = 0; i < num_list.length; i++) {
        a *= num_list[i];
        b += num_list[i];
    }

    return a > (b * b) ? 0 : 1;
}