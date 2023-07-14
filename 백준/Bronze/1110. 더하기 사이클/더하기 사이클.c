#include <stdio.h>

int    main(void)
{
    int    N, cpN, sum;
    int    cnt = 1;
    
    scanf("%d", &N);
    if (N < 10)
        N *= 10;
    cpN = N;
    while (1)
    {
        sum = (cpN / 10) + (cpN % 10);
        cpN = ((cpN % 10) * 10) + (sum % 10);
        if (N == cpN)
        {
            printf("%d", cnt);
            return (0);
        }
        cnt++;
    }
}