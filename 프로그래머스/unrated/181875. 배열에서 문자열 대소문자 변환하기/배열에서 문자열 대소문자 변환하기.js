function solution(strArr) {
    const rtnArr = [];

    for (let i = 0; i < strArr.length; i++) {
        if ((i + 1) % 2 === 0) {
            rtnArr.push(strArr[i].toUpperCase());
        } else {
            rtnArr.push(strArr[i].toLowerCase());
        }
    }
    return rtnArr;
}