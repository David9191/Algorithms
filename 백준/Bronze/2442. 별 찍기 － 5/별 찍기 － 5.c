#include <stdio.h>

int    main(void)
{
    int    n, i = 1, j, k, space, star;
    scanf("%d", &n);
    while (i <= n)
    {
        j = 0;
        space = n - i;
        while (j < space)
        {
            printf(" ");
            j++;
        }
        k = 0;
        star = (2 * i) - 1;
        while (k < star)
        {
            printf("*");
            k++;
        }
        i++;
        printf("\n");
    }
    return (0);
}