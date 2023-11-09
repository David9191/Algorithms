function isOng(str) {
    const ong = ['aya', 'ye', 'woo', 'ma'];
    let cpyStr = str;

    if (str.length > 10) {
        return 0;
    }
    while (cpyStr.length > 0) {
        let correctOng = '';

        for (let i = 0; i < ong.length; i++) {
            if (ong[i] === '') continue;
            const a = cpyStr.slice(0, ong[i].length);

            if (a === ong[i]) {
                // console.log(ong[i], a);
                const len = ong[i].length;
                correctOng = ong[i];
                ong[i] = '';
                cpyStr = cpyStr.slice(len);
                // console.log(cpyStr);
            }
        }
        if (correctOng === '') {
            return 0;
        }
    }
    return 1;
}

function solution(babbling) {
    let answer = 0;

    for (let i = 0; i < babbling.length; i++) {
    // for (let i = 0; i < 1; i++) {
        const checkOng = isOng(babbling[i]);
        // const checkOng = isOng('yemawoo');

        answer += checkOng;
    }
    return answer;
}