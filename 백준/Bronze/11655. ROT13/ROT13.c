#include <stdio.h>

int    main(void)
{
    int     i = -1;
    char    str[101];
    
    scanf("%[^\n]s", str);
    while (str[++i])
    {
        if ((str[i] >= 'A' && str[i] <= 'M') || (str[i] >= 'a' && str[i] <= 'm'))
            str[i] += 13;
        else if ((str[i] >= 'N' && str[i] <= 'Z') || (str[i] >= 'n' && str[i] <= 'z'))
            str[i] -= 13;
    }
    printf("%s\n", str);
    return (0);
}