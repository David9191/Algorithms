function solution(n, control) {
    let N = n;
    const arr = control.split('');

    arr.map(a => {
        if (a === 'w') N++;
        else if (a === 's') N--;
        else if (a === 'd') N += 10;
        else if (a === 'a') N -= 10;
    })
    return N;
}