function solution(seoul) {
    let kimLocation = 0;

    for (let i = 0; i < seoul.length; i++) {
        if (seoul[i] === 'Kim') {
            kimLocation = i;
            break;
        }
    }
    return `김서방은 ${kimLocation}에 있다`;
}