#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char* solution(const char* rsp) {
    char *answer = (char*)calloc(1, strlen(rsp) + 1);

    for (int i = 0; rsp[i]; i++)
    {   
        if (rsp[i] == '2')
            answer[i] = '0';
        else if (rsp[i] == '0')
            answer[i] = '5';
        else
            answer[i] = '2';
    }
    return (answer);
}