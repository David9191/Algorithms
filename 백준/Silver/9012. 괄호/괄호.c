#include <stdio.h>
#include <string.h>

char    *stack(char *str)
{
    int    cnt = 0;
    
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == '(')
            cnt++;
        else if (str[i] == ')')
            cnt--;
        if (cnt < 0)
            return ("NO");
    }
    if (cnt == 0)
        return ("YES");
    else
        return ("NO");
}

int    main(void)
{
    int    n;
    char    str[51], *result;

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%s", str);
        result = stack(str);
        if (!strcmp(result, "YES"))
            printf("%s\n", "YES");
        else
            printf("%s\n", "NO");
    }
}