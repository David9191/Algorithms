function solution(spell, dic) {
    for (let i = 0; i < dic.length; i++) {
        let check = true;
        const str = dic[i].split('');

        for (let k = 0; k < spell.length; k++) {
            if (str.includes(spell[k]) === false) {
                check = false;
                break;
            }
        }
        if (check === true) {
            return 1;
        }
    }
    return 2;
}