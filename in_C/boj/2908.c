#include <stdio.h>

int    main(void) {
    int    a, b, x = 0, y = 0;
    
    scanf("%d %d", &a, &b);
    for (int i = 0; i < 3; i++) {
        x = (x * 10) + (a % 10);
        a /= 10;
        y = (y * 10) + (b % 10);
        b /= 10;
    }
    x > y ? printf("%d\n", x) : printf("%d\n", y);
    return (0);
}
