#include <stdio.h>

int    main(void)
{
    int    n, k, i, j = 0;
    
    scanf("%d", &n);
    while (n > 0)
    {
        k = n;
        i = 0;
        while (i++ < j)
            printf(" ");
        j++;
        while (k-- > 0)
            printf("*");
        printf("\n");
        n--;
    }
}