#include <stdio.h>

int    main(void)
{
    int    n;
    double    avg = 0, max = 0;
    
    scanf("%d", &n);
    int    arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    for (int i = 0; i < n; i++)
        arr[i] > max ? (max = arr[i]) : 0;
    for (int i = 0; i < n; i++)
        avg += (arr[i] / max) * 100;
    printf("%.5lf\n", (avg / n));
}
