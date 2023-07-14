#include <stdio.h>

int    max(int *arr)
{
    int    max = arr[0];

    for (int i = 1; i < 3; i++)
    {
        if (max < arr[i])
            max = arr[i];
    }
    return (max);
}

int    main(void)
{
    int    arr[3];
    int    cnt = 0, dup;

    scanf("%d %d %d", &arr[0], &arr[1], &arr[2]);
    if (arr[0] == arr[1]) { cnt++; dup = arr[0]; };
    if (arr[1] == arr[2]) { cnt++; dup = arr[1]; };
    if (arr[0] == arr[2]) { cnt++; dup = arr[0]; };
    
    if (cnt == 0)
        printf("%d\n", max(arr) * 100);
    if (cnt == 1)
        printf("%d\n", 1000 + (dup * 100));
    if (cnt == 3)
        printf("%d\n", 10000 + (arr[0] * 1000));

    return (0);
}