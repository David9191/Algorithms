#include <stdio.h>

int    main(void)
{
    int    i = 0, a, cnt, mul = 1, cmul, len = 1;
    while (i++ < 3) {
        scanf("%d", &a);
        mul *= a;
    }
    cmul = mul;
    while (cmul > 0) {
        cmul /= 10;
        len++;
    }
    i = 0;
    while (i < 10) {
        cmul = mul;
        cnt = 0;
        while (cmul > 0) {
            if (cmul % 10 == i)
                cnt++;
            cmul /= 10;
        }
        printf("%d\n", cnt);
        i++;
    }
}