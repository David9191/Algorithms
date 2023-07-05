function solution(s) {
    const stack = [];
    if (s.length < 2 || s.indexOf('(') === -1 || s.indexOf(')') === -1) return false;

    for (let i = 0; i < s.length; i++) {
        if (s[i] === '(')
            stack.push(s[i]);
        else if (s[i] === ')' && stack[stack.length - 1] === '(')
            stack.pop();
        else
            return false;
    }
    if (stack.length > 0) return false;
    return true;
}