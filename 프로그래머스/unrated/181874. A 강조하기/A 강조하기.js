function solution(myString) {
    return myString.replace(/a/g, 'A').replace(/[B-Z]/g, (match) => {
        return match.toLowerCase();
    });
;
}