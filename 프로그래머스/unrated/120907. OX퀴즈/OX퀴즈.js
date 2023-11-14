function solution(quiz) {
    const answer = [];

    for (let i = 0; i < quiz.length; i++) {
        const arr = quiz[i].split(' ');
        const yourAnswer = Number(arr[4]);
        let realAnswer = 0;

        switch(arr[1]) {
            case '+':
                realAnswer = Number(arr[0]) + Number(arr[2]);
                break;
            case '-':
                realAnswer = Number(arr[0]) - Number(arr[2]);
                break;
            default:
                break;
        }
        if (realAnswer === yourAnswer) {
            answer.push("O");
        } else {
            answer.push("X");
        }
    }
    return answer;
}