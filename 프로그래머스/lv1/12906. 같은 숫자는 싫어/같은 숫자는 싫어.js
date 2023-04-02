class Stack {
    constructor() {
        this.arr = [];
    }
    push(n) {
        this.arr.push(n);
    }
    getLast() {
        return this.arr[this.arr.length - 1];
    }
}

function solution(arr)
{
    let answer = new Stack();
    
    arr.forEach((item, idx, arr) => {
        if (idx === 0) {
            answer.push(item);
        }
        if (answer.getLast() !== item) answer.push(item);
    });
    return answer.arr;
}