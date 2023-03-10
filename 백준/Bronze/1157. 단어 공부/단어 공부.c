#include <stdio.h>
#include <string.h>

int    main(void)
{
    char    str[1000001];
    int    arr[26] = { 0, };
    int    max = 0, max_i = 0, max_two = 0, i;

    scanf("%s", str);
    for (i = 0; str[i]; i++) {
        if (str[i] >= 'a')
            str[i] -= 32;
        arr[str[i] - 65]++;
    }
    for (i = 0; i < 26; i++) {
        if (arr[i] > max) {
            max = arr[i];
            max_i = i;
            max_two = 0;
        }
        else if (arr[i] == max)
            max_two = 1;
    }
    max_two == 1 ? printf("?") : printf("%c", (max_i + 65));
    return (0);
}