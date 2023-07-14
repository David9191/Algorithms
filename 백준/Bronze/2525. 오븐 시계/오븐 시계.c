#include <stdio.h>
    
int    main(void)
{
    int    hour, min, time_to_cook, print;
    
    scanf("%d %d", &hour, &min);
    scanf("%d", &time_to_cook);
    hour += time_to_cook / 60;
    min += time_to_cook % 60;
    if (min >= 60)
    {
        hour += min / 60;
        min %= 60;
    }
    if (hour >= 24)
        hour -= 24;
    printf("%d %d", hour, min);
    return (0);
}