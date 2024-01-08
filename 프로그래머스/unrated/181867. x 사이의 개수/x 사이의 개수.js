function solution(myString) {
    const answer = [];
    let a = 0;

    for (let i = 0; i < myString.length; i++) {       
        if (myString[i] === 'x') {
            answer.push(a);
            a = 0;
        } else {
            a++;
        }
    }
    answer.push(a);
    return answer;
}