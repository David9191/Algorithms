function solution(a, b) {
    const strA = Number(String(a) + String(b));
    const strB = Number(String(b) + String(a));

    return strA > strB ? strA : strB;
}