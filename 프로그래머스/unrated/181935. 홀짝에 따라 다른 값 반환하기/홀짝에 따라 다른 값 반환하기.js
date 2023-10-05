function solution(n) {
    let even = 0;

    if (n % 2 !== 0) {
        let odd = 0;
    
        for (let i = 1; i <= n; i++) {
            if (i % 2 !== 0)
                odd += i;
        }
        return odd;
    }

    for (let i = 1; i <= n; i++) {
        if (i % 2 === 0)
            even += i * i;
    }
    return even;
}