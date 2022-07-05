#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static int	check_croatia(char *str)
{
	if (strncmp(str, "c=", 2) == 0
		|| strncmp(str, "c-", 2) == 0
		|| strncmp(str, "d-", 2) == 0
		|| strncmp(str, "lj", 2) == 0
		|| strncmp(str, "nj", 2) == 0
		|| strncmp(str, "s=", 2) == 0
		|| strncmp(str, "z=", 2) == 0)
		return (2);
	else if (strncmp(str, "dz=", 3) == 0)
		return (3);
	else
		return (1);
}

int	main(void)
{
	char	*str = NULL;
	int		idx = 0, cnt = 0;

	str = calloc(sizeof(char), 101);
	scanf("%s", str);
	if (!str || !strlen(str))
		exit (1);
	while (str[idx])
	{
		idx += check_croatia(str + idx);
		cnt++;
	}
	printf("%d\n", cnt);
	exit (0);
}
