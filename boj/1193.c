#include <stdio.h>

// 정렬 : 분모 + 분자가 2가되는 경우의 수, 3이되는 경우, 4가 되는 경우, 5가 되는 경우
// 홀수 : 오름차순
// 짝수 : 내림차순

int	main(void)
{
	int	in_case = 3, n = 0, idx = 1, line = 0, x;

	scanf("%d", &n);
	if (n < 1)
		return (0);
	while (1)
	{
		if ((line * (line - 1) / 2) < n && n <= (line * (line + 1) / 2))
			break ;
		line++;
	}
	x = line * (line + 1) / 2;
	if (line % 2 == 0)
		printf("%d/%d\n", line - (x - n), x - n + 1);
	else
		printf("%d/%d\n", x - n + 1, line - (x - n));
	return (0);
}
