#include <stdio.h>

int    main(void)
{
    int    n, max, i = 1;
    scanf("%d", &max);
    for (int j = 2; j < 10; j++)
    {
        scanf("%d", &n);
        if (n > max)
        {
            i = j;
            max = n;
        }
    }
    printf("%d\n%d\n", max, i);
}
