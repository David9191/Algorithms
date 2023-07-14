function solution(array, commands) {
    let answer = [];
    
    commands.forEach((item, idx, arr) => {
        let cpyArr = array.slice();
        let splicedArr = cpyArr.splice(item[0] - 1, item[1] - item[0] + 1);
        splicedArr.sort((a, b) => a - b);
        answer.push(splicedArr[item[2] - 1]);
    });
    return answer;
}