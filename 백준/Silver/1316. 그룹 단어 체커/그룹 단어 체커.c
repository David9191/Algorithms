#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static int	check_group_word(char *str)
{
	int	idx = 0, k;

	while (str[idx])
	{
		k = 1;
		while (str[idx] == str[idx + k])
			idx++;
		while (str[idx + k])
		{
			if (str[idx] == str[idx + k])
				return (0);
			k++;
		}
		idx++;
	}
	return (1);
}

int	main(void)
{
	char	*str;
	int		cnt = 0, idx = 0, n = 0;

	str = calloc(sizeof(char), 101);
	scanf("%d", &n);
	while (idx < n)
	{
		scanf("%s", str);
		if (strlen(str) == 1)
			cnt++;
		else
			cnt += check_group_word(str);
		idx++;
	}
	printf("%d\n", cnt);
}