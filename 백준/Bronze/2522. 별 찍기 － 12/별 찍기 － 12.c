#include <stdio.h>

int    main(void)
{
    int    n, i = 1, j, k, space, star, repeat;
    
    scanf("%d", &n);
    space = n - 1;
    repeat = (n * 2);
    while (i <= (repeat / 2))
    {
        j = 0;
        while (j++ < space)
            printf(" ");
        space--;
        star = i;
        k = 0;
        while (k++ < star)
            printf("*");
        printf("\n");
        i++;
    }
    i = 1;
    space = n - (n - 1);
    while (i < (repeat / 2))
    {
        j = 0;
        while (j++ < space)
            printf(" ");
        space++;
        k = 0;
        star = n - i;
        while (k++ < star)
            printf("*");
        printf("\n");
        i++;
    }
    return(0);
}