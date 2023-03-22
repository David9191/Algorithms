#include <stdio.h>
#include <string.h>
#include <ctype.h>

int    main(void)
{
    int    n, i = 0, k = 0, j;
    char    str[1001];
    char    c;

    scanf("%d", &n);
    scanf("%c", &c);
    for (int a = 0; a < n; a++)
    {
        scanf("%[^\n]s", str);
        scanf("%c", &c);
        for (int i = 0; i < strlen(str); i++)
        {
            j = 0;
            while (isalpha(str[i + j]))
                j++;
            k = i + j - 1;
            while (k >= i)
                printf("%c", str[k--]);
            i += j;
            if (str[i] == ' ')
                printf(" ");
        }
        printf("\n");
    }
}