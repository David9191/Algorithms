#include <stdio.h>
#include <stdbool.h>

int	main(void) {
	int		n, i = -1;
	bool	check[1000001];

	// flase로 초기값 세팅
	while (++i <= 1000000)
		check[i] = false;
	// 2부터 시작해서 소수의 배수 true로 바꿔주기
	for (i = 2; i <= 1000000; i++) {
		if (!check[i])
			for (int j = i+i; j<=1000000; j+=i)
				check[j] = true;
	}
	while (1) {
		scanf("%d", &n);
		if (n == 0) break ;
		for (int i = n - 2; i > 2; i--) {
			if (!check[i] && !check[n - i]) {
				printf("%d = %d + %d\n", n, n - i, i);
				break ;
			}
		}
	}
	return (0);
}
