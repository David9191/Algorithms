#include <stdio.h>

int    self_check(int x)
{
    int    ch;
    
    ch = x;
    while (x > 0)
    {
        ch += (x % 10);
        x /= 10;
    }
    return (ch);
}

int    main(void)
{
    int    x, i;
    int    self[10001];
    for (i = 1; i < 10001; i++)
    {
        x = self_check(i);
        if (x <= 10000)
            self[x] = -1;
    }
    for (i = 1; i < 10001; i++)
        if (self[i] != -1)
            printf("%d\n", i);
    return (0);
}
