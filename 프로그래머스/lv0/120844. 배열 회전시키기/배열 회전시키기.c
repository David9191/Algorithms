#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

void    right(int *answer, int *arr, int len)
{
    for (int i = 0; i < (len - 1); i++)
        answer[i + 1] = arr[i];
    answer[0] = arr[len - 1];
}

void    left(int *answer, int *arr, int len)
{
    for (int i = 1; i < len; i++)
        answer[i - 1] = arr[i];
    answer[len - 1] = arr[0];
}

int* solution(int arr[], size_t len, const char* direction) {
    int* answer = (int*)malloc(sizeof(int) * len);

    if (!strcmp(direction, "right"))
        right(answer, arr, len);
    else
        left(answer, arr, len);
    return (answer);
}