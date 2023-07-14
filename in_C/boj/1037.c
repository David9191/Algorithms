#include <stdio.h>

int    main(void)
{
    int    n, x, min, max;

    scanf("%d", &n);
    scanf("%d", &x);
    min = x;
    max = x;
    for (int i = 0; i < (n - 1); i++) {
        scanf("%d", &x);
        if (x < min)
            min = x;
        if (x > max)
            max = x;
    }
    printf("%d", (min * max));
}
