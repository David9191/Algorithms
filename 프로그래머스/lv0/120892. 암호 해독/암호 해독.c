#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* solution(const char* cipher, int code) {
    int k = 0;
    char *answer = (char*)calloc(sizeof(char), (strlen(cipher) / code) + 1);

    for (int i = code; i <= strlen(cipher); i += code)
        answer[k++] = cipher[i - 1];
    return (answer);
}