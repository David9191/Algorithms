#include <stdio.h>

int	main(void)
{
	int	a = 0, b = 0, c = 0, cnt = 0;

	scanf("%d %d %d", &a, &b, &c);
	if (b >= c || c < 0)
	{
		printf("-1");
		return (0);
	}
	cnt = a/(c - b) + 1;
	// a/(c-b)는 손해랑 이익이랑 똑같아지는 시점이고 손익분기점은 이익이 손해를 넘는 시점이므로 + 1을 해야한다.
	printf("%d\n", cnt);
	return (0);
}