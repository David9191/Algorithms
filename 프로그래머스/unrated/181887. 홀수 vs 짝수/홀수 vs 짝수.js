function solution(num_list) {
    let even = 0;
    let odd = 0;

    for (let i = 1; i <= num_list.length; i++) {
        if (i % 2 ===  0) {
            odd += num_list[i - 1];
        } else {
            even += num_list[i - 1];
        }
    }
    return even > odd ? even : odd;
}