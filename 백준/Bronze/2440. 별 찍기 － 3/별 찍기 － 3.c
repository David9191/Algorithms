#include <stdio.h>

int    main(void)
{
    int    i, j;
    
    scanf("%d", &i);
    while (i > 0)
    {
        j = i;
        while (j > 0)
        {
            printf("*");
            j--;
        }
        printf("\n");
        i--;
    }
}