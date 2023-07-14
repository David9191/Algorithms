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
	printf("%d\n", cnt);
	return (0);
}