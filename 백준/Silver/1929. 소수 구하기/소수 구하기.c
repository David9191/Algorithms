#include <stdio.h>
#include <stdbool.h>

int    main(void)
{
    int    M = 0, N = 0;
    scanf("%d %d", &M, &N);
    if (N < 2)
        return (0);
    bool    check[N + 1];
    for (int i = 0; i <= N; i++) {
        check[i] = false;
    }
    for (int i = 2; i <= M; i++) {
        if (check[i] == false)
            for (int j = i + i; j <= N; j += i)
                check[j] = true;
    }
    for (int i = M; i <= N; i++) {
        if (i >= 2 && check[i] == false) {
            printf("%d\n", i);
            for (int j = i + i; j <= N; j += i) {
                check[j] = true;
            }
        }
    }
}