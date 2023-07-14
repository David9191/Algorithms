#include <stdio.h>

int    main(void)
{
    int    n, i = 1, j, k, z = 1, space, star;
    
    scanf("%d", &n);
    while (i <= n)
    {
        j = 1;
        while (j++ < i)
            printf(" ");
        k = 0;
        star = (2 * n) - z;
        while (k++ < star)
            printf("*");
        printf("\n");
        z += 2;
        i++;
    }
    i = 1;
    z -= 4;
    space = n - 2;
    while (i < n)
    {
        j = 0;
        while (j++ < space)
            printf(" ");
        space--;
        k = 0;
        star = (2 * n) - z;
        while (k++ < star)
            printf("*");
        printf("\n");
        z -= 2;
        i++;
    }
}