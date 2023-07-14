function solution(bin1, bin2) {
    bin1 = bin1.split('').map(i=>+i);
    bin2 = bin2.split('').map(i=>+i);
    const len = bin1.length > bin2.length ? bin1.length : bin2.length;
    let flag = 0, sum , arr = [], x, y;
    
    for (let i = 0; i <= len; i++) {
        if (i === len && flag === 0)
            break;
        else if (i === len && flag === 1) {
            arr.unshift(flag);
            break;
        }
        x = bin1.pop();
        y = bin2.pop();
        if (x === undefined) x = 0;
        if (y === undefined) y = 0;
        sum = x + y;
        if (flag === 1) {
            sum += flag;
            flag = 0;
        }
        if (sum > 1) {
            flag = 1;
            sum -= 2;
        }
        arr.unshift(sum);
    }
    return arr.join('');
}