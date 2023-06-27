function solution(my_string, is_prefix) {
    const sliced_str = my_string.slice(0, is_prefix.length);
    let is_true = 1;

    if (sliced_str !== is_prefix) {
        is_true = 0;
    }
    return is_true;
}