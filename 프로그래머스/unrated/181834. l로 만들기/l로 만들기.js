function solution(myString) {
    const answer = myString.split('').map(v=>{
        if (v < 'l') return 'l';
        else return v;
    }).join('');

    return answer;
}