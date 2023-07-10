function solution(s) {
    const str = s.split('');
    const upper = [];
    const lower = [];

    for (let i = 0; i < str.length; i++)
        if (str[i] >= 'A' && 'Z' >= str[i]) upper.push(str[i]);
        else lower.push(str[i]);
    return lower.sort((a,b)=>b.localeCompare(a)).join('') +
        upper.sort((a,b)=>b.localeCompare(a)).join('');
}