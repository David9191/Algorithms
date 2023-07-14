#include <stdio.h>

int    main(void)
{
    int    n, no = 0, c;
    int    seats[100] = { 0, };
    
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &c);
        if (seats[c - 1] == 0)
            seats[c - 1] = c;
        else
            no++;
    }
    printf("%d\n", no);
    return (0);
}