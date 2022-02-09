#include <stdio.h>

int    gcd(int a, int b) {
    if (b == 0)
        return (a);
    if (a > b)
        return (gcd(b, a % b));
    else
        return (gcd(a, b % a));
}

int    lcm(int a, int b, int max) {
    return ((a * b) / max);
}

int    main(void)
{
    int    iter, fir, sec, min, max;

    scanf("%d", &iter);
    while (iter--) {
        scanf("%d %d", &fir, &sec);
        max = gcd(fir, sec);
        min = lcm(fir, sec, max);
        printf("%d\n", min);
    }
}
