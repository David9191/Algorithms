#include <stdio.h>
#include <stdlib.h>
#include <string.h>

# define DIFFERENCE	(2541 - 1998)

int	main(void)
{
	int	th = 0, ko = 0;

	scanf("%d", &th);
	ko = th - DIFFERENCE;
	printf("%d\n", ko);
	return (0);
}