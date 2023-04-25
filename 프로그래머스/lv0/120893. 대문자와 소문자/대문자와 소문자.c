#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char* solution(const char* my_string) {
    char* str = strdup(my_string);

    for (int i = 0; str[i]; i++)
        if (65 <= str[i] && str[i] <= 90)
            str[i] += 32;
        else if (97 <= str[i] && str[i] <= 122)
            str[i] -= 32;
    return (str);
}