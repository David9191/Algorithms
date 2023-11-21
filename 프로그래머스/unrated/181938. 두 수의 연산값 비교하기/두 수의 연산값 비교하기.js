function solution(a, b) {
    return 2 * a * b > Number(String(a) + String(b)) ? 2 * a * b : Number(String(a) + String(b));
}