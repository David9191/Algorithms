function solution(s) {
    const str = s.split('');

    if (s.length !== 4 && s.length !== 6) return false;
    for (let i = 0; i < str.length; i++)
        if (!(str[i] >= '0' && '9' >= str[i])) return false;
    return true;
}