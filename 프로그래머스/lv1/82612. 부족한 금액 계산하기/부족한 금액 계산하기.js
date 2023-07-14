function solution(price, money, count) {
    let answer = 0;
    let fee = 0;

    for (let i = 1; i <= count; i++)
        fee += price * i;
    if (money < fee) answer = fee - money;
    return answer;
}