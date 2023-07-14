function solution(s) {
    const str = s.split(' ');
    let answer = '';

    for (let i = 0; i < str.length; i++) {
        if (i !== 0) answer += ' ';
        for (let k = 0; k < str[i].length; k++) {
            answer += ((k % 2) === 0) ? str[i][k].toUpperCase() : str[i][k].toLowerCase();
        }
    }
    return answer;
}