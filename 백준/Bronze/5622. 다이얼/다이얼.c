#include <stdio.h>
#include <stdlib.h>
#include <string.h>

# define SEC	2;

char	dial[8][5] = {
	{ 'A', 'B', 'C', '\0' },
	{ 'D', 'E', 'F', '\0' },
	{ 'G', 'H', 'I', '\0' },
	{ 'J', 'K', 'L', '\0' },
	{ 'M', 'N', 'O', '\0' },
	{ 'P', 'Q', 'R', 'S', '\0' },
	{ 'T', 'U', 'V', '\0' },
	{ 'W', 'X', 'Y', 'Z', '\0' }
};

int	find_char(char ch)
{
	int	idx = 0, k = 0;

	while (dial[idx])
	{
		k = 0;
		while (dial[idx][k])
		{
			if (dial[idx][k] == ch)
				return (idx + 1);
			else
				k++;
		}
		idx++;
	}
	exit(1);
}

int	main(void)
{
	char	*str;
	int		min_sec = 0, idx = 0;

	str = calloc(sizeof(char), 16);
	scanf("%s", str);
	while (str[idx])
	{
		min_sec += find_char(str[idx]) + SEC;
		idx++;
	}
	printf("%d\n", min_sec);
	return (0);
}