#include <stdio.h>

int    main(void)
{
    int    n, c, total, cnt;
    char ox[81];
    
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%s", ox);
        total = 0;
        for (int j = 0; ox[j] != '\0'; j++) {
            cnt = 0;
            if (ox[j] == 'O') {
                c = j;
                while (ox[c--] == 'O')
                    cnt++;
            }
            total += cnt;
        }
        printf("%d\n", total);
    }
}