function solution(s) {
    const arr = s.split(' ').map(v => {
        let str = '';

        for (let i = 0; i < v.length; i++) {
            if (i === 0 && v[0] >= 'a' && 'z' >= v[0])
                str += v[0].toUpperCase();
            else if (i !== 0 && (v[i] >= 'A' && 'Z' >= v[i]))
                str += v[i].toLowerCase();
            else
                str += v[i];
        }
        return str;
    }).join(' ');
    return arr;
}