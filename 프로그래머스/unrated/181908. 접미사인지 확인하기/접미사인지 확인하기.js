function solution(str, sfx) {
    return str.slice(sfx.length * -1) === sfx ? 1 : 0;
}