const arr = require('fs').readFileSync('/dev/stdin').toString().trim().split('').map(i=>+i);

function solution(arr) {
  let cnt = 0;

  for (let i = 0; i < arr.length; i++) if (arr[i] === 9) arr[i] = 6;

  while (arr.length) {
    for (let i = 0; i < 9; i++) {
      const index = arr.indexOf(i);

      if (index !== -1) arr.splice(index, 1);
    }
    const idx = arr.indexOf(6);
    if (idx !== -1) arr.splice(idx, 1);
    cnt++;
  }
  return cnt;
}

console.log(solution(arr));