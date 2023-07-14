function isAlpha(letter) {
    if ((letter >= 65 && 90 >= letter)
        || (letter >= 97 && 122 >= letter)) {
        return true;
    }
    return false;
}

function overZ(letter, n) {
    if ((letter >= 65 && 90 >= letter && letter + n > 90)
        || (letter >= 97 && 122 >= letter && letter + n > 122)) {
        return true;
    }
    return false;
}

function solution(s, n) {
    let answer = '';

    for (let i = 0; i < s.length; i++) {
        const letter = s[i].charCodeAt();

        if (isAlpha(letter) && overZ(letter, n)) {
            answer += String.fromCharCode(letter + n - 26);
        } else if (isAlpha(letter) && !overZ(letter, n)) {
            answer += String.fromCharCode(letter + n);
        } else {
            answer += s[i];
        }
    }
    return answer;
}