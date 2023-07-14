#include <stdio.h>
#include <ctype.h>

int    main(void)
{
    int    i, j, k;
    char    str[100001];

    scanf("%[^\n]s", str);
    i = 0;
    while (str[i] != '\0') {
        if (str[i] == '<')
            while (1) {
                if (str[i] == '>') {
                    printf("%c", str[i++]);
                    break;
                }
                printf("%c", str[i++]);
            }
        if (isdigit(str[i]) || (str[i] >= 'a' && str[i] <= 'z')) {
            j = 0;
            while (isdigit(str[i + j]) || (str[i + j] >= 'a' && str[i + j] <= 'z'))
                j++;
            k = j;
            while (--j >= 0)
                printf("%c", str[i + j]);
            i += k;
        }
        if (str[i] == ' ')
            printf("%c", str[i++]);
    }
    return (0);
}