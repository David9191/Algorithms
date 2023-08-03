function solution(myString, pat) {
    const a = myString.toUpperCase();
    const b = pat.toUpperCase();

    if (a.indexOf(b) !== -1) return 1;
    return 0;
}