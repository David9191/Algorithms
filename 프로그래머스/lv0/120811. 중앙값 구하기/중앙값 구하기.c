#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// array_len은 배열 array의 길이입니다.
int solution(int array[], size_t len) {
    int order = (len / 2), temp = 0;

    for (int i = 0; i < len; i++)
        for (int k = i + 1; k < len; k++)
            if (array[i] > array[k])
            {
                temp = array[i];
                array[i] = array[k];
                array[k] = temp;
            }
    return (array[order]);
}