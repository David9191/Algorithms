#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char    *to_lower(char *str)
{
    char    *rt_str = str;
    while (*str)
    {   
        if (65 <= *str && *str <= 90)
            *str += 32;
        str++;
    }
    return (rt_str);
}

char    *solution(const char* my_string) {
    char temp = 'a', *answer = to_lower(strdup(my_string));
    int len = strlen(my_string);

    for (int i = 0; i < len; i++)
        for (int k = i + 1; k < len; k++)
            if (answer[i] > answer[k])
            {
                temp = answer[i];
                answer[i] = answer[k];
                answer[k] = temp;
            }
    return (answer);
}