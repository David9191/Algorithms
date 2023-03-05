#include <stdio.h>

int    hansoo(int h)
{
    int    ch;
    
    ch = (h % 10) - ((h / 10) % 10);
    h /= 10;
    while (h > 9)
    {
        if (ch != (h % 10) - ((h / 10) % 10))
            return (-1);
        h /= 10;
    }
    return (h);
}

int    main(void)
{
    int    n, cnt = 99, check;
    
    scanf("%d", &n);
	if (n < 100)
	{
		printf("%d\n", n);
		return (0);
	}
    for (int i = 100; i <= n; i++)
    {
        check = hansoo(i);
        if (check != -1)
            cnt++;
    }
    printf("%d\n", cnt);
	return (0);
}