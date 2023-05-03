#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char* solution(const char* my_string, int num1, int num2) {
    char ch = 0, *str = strdup(my_string);

    ch = str[num1];
    str[num1] = str[num2];
    str[num2] = ch;
    return (str);
}