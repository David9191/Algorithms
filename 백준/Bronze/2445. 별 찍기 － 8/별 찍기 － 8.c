#include <stdio.h>

int    main(void)
{
    int    n, i = 1, j, k, space, star;
    
    scanf("%d", &n);
    while (i <= n)
    {
        star = i;
        j = 0;
        while (j++ < star)
            printf("*");
        k = 0;
        space = (n * 2) - (star * 2);
        while (k++ < space)
            printf(" ");
        j = 0;
        while (j++ < star)
            printf("*");
        printf("\n");
        i++;
    }
    i = 1;
    while (i < n)
    {
        star = n - i;
        j = 0;
        while (j++ < star)
            printf("*");
        k = 0;
        space = (n * 2) - (star * 2);
        while (k++ < space)
            printf(" "); 
        j = 0;
        while (j++ < star)
            printf("*");
        printf("\n");
        i++;
    }
    return (0);
}