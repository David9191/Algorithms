#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// stack 구현

size_t    arr_size(int *arr)
{
    size_t    len;
    
    len = 0;
    while (arr[len] != 0)
        len++;
    return (len);
}

int    main(void)
{
    int    arr[10000] = { 0, };
    int    n, j = -1, x;
    size_t    len;
    char    str[6];
    
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%s", str);
        if (!strcmp(str, "push"))
        {
            scanf("%d", &x);
            arr[++j] = x;
        }
        else if (!strcmp(str, "pop"))
        {
            if (arr[0] == 0)
                printf("%d\n", -1);
            else
            {
                printf("%d\n", arr[j]);
                arr[j--] = 0;
            }
        }
        else if (!strcmp(str, "size"))
        {
            len = arr_size(arr);
            printf("%zu\n", len);
        }
        else if (!strcmp(str, "empty"))
        {
            if (arr[0] == 0)
                printf("%d\n", 1);
            else
                printf("%d\n", 0);
        }
        else if (!strcmp(str, "top"))
        {
            if (arr[0] == 0)
                printf("%d\n", -1);
            else
                printf("%d\n", arr[j]);
        }
    }
    return (0);
}
