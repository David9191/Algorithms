#include <stdio.h>
#include <string.h>

int    main(void)
{
    int    n, r;
    char    str[21];
    
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d %s", &r, str);
        for (int j = 0; j < strlen(str); j++) {
            for (int k = 0; k < r; k++)
                printf("%c", str[j]);
        }
        printf("\n");
    }
    return (0);
}
