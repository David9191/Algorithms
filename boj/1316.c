#include <stdio.h>
#include <string.h>

int    checker(char *str) {
    int    i = 0;
    while (str[i] != '\0') {
        
        i++;
    }
}

int    main(void) {
    char    str[101];
    int    cnt = 0, n;

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%s", str);
        if (checker(str))
            cnt++;
    }
    printf("%d\n", cnt);
}
