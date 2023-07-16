function solution(num_list) {
    let even = 0;
    let odd = 0;

    num_list.map(a => {
        if (a % 2 === 0) even += a + '';
        else odd += a + '';
    })
    return Number(even) + Number(odd);
}