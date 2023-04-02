function solution(numbers) {
	let answer = '';
	let index;
	const obj = {
			0: 'zero',
			1: 'one',
			2: 'two',
			3: 'three',
			4: 'four',
			5: 'five',
			6: 'six',
			7: 'seven',
			8: 'eight',
			9: 'nine',
	}
	
	while (numbers.length > 0) {
		for (let i = 0; i < 10; i++) {
			index = numbers.substring(0, 5).indexOf(obj[i]);
			if (index > -1) {
				answer += i + '';
				numbers = numbers.replace(obj[i], '');
			}
		}
	}

	return +answer;
}