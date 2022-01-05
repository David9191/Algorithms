#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int    main(void)
{
    int    n, k, start = 0, end, * arr, * res;

    scanf("%d %d", &n, &k);
    arr = (int*)malloc(sizeof(int) * (n * n));
    for (int i = 0; i < n; i++)
        arr[i] = (i + 1);
    res = (int*)malloc(sizeof(int) * n);
    end = n;
    printf("<");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < k - 1; j++) {
            arr[end++] = arr[start++];
        }
        res[i] = arr[start++];
        if (end - start == 0)
            printf("%d", res[i]);
        else
            printf("%d, ", res[i]);
    }
    printf(">");
    return (0);
}
