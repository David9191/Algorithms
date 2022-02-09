#include <stdio.h>

int	main(void)
{
	int	difference = 5, geometric_ratio = 6, start = 2, end = 7, n = 1, cnt = 2;

	scanf("%d", &n);
	if (n == 1)
	{
		printf("1\n");
		return (0);
	}
	while (1)
	{
		if (start <= n && n <= end)
		{
			printf("%d\n", cnt);
			return (0);
		}
		start = end + 1;
		difference += geometric_ratio;
		end = start + difference;
		cnt++;
	}
	return (0);
}