#include <stdio.h>

int    main(void)
{
    int    n, cnt = 0;
    
    scanf("%d", &n);
    while (n >= 5)
    {
        if (n % 5 == 0)
            cnt++;
        if (n % 25 == 0)
            cnt++;
        if (n % 125 == 0)
            cnt++;
        n--;
    }
    printf("%d\n", cnt);
    return (0);
}