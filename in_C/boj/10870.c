#include <stdio.h>

int	fibonacci(int integer)
{
	if (integer == 0)
		return (0);
	else if (integer <= 2)
		return (1);
	else
		return (fibonacci(integer - 1) + fibonacci(integer - 2));
}

int	main(void)
{
	int	n = 0, fibo = 0;

	scanf("%d", &n);
	fibo = fibonacci(n);
	printf("%d\n", fibo);
}