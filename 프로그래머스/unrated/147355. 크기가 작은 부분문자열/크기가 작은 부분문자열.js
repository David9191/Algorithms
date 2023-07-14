function solution(t, p) {
    const pNum = p * 1;
    const pLen = p.length;
    let cnt = 0;

    for (let i = 0; i + pLen <= t.length; i++) {
        const cmpStr = t.slice(i, i + pLen) * 1;

        if (pNum >= cmpStr) cnt++;
    }
    return cnt;
}