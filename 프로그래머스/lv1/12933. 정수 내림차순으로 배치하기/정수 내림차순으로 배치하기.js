function solution(n) {
    let rtnNum = (n + '').split('').map(i=>i*1).sort((a,b)=>b-a).join('');
    return rtnNum*1;
}