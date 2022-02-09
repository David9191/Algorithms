#include <stdio.h>
#include <string.h>

int    main(void) {
    char str[101];
    int    f;
    
    scanf("%s", str);
    for (int j = 97; j < 123; j++) {
        f = 0;
        for (int i = 0; i < strlen(str); i++) {
            if (j == str[i]) {
                printf("%d ", i);
                f = 1;
                break ;
            }
        }
        if (f == 0)
            printf("%d ", -1);
    }
    return (0);
}
