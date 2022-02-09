#include <stdio.h>
#include <string.h>
#include <ctype.h>

int    main(void) {
    char    str[1000000];
    int    i = 0, word_cnt = 0;
    
    scanf("%[^\n]s", str);
    while (str[i] == ' ')
            i++;
    for (i; i < strlen(str); i++) {
        if (isalpha(str[i])) {
            word_cnt++;
            while (isalpha(str[i]))
                i++;
        }
    }
    printf("%d\n", word_cnt);
    return (0);
}
