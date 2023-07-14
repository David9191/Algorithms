#include <stdio.h>

int    main(void) {
    int    n, star, o = 1;
    
    scanf("%d", &n);
    star = (2 * n);
    for (int i = 0; i < n; i++) {
        for (int k = 0; k < i; k++)
            printf(" ");
        for (int j = 0; j < star - o; j++)
            printf("*");
        printf("\n");
        o += 2;
    }
}