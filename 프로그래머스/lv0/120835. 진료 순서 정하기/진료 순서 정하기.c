#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int emergency[], size_t len) {
    int cnt, *answer = (int*)malloc(sizeof(int) * len);

    for (int i = 0; i < len; i++)
    {
        cnt = 1;
        for (int k = 0; k < len; k++)
        {
            if (emergency[i] < emergency[k])
                cnt++;
        }
        answer[i] = cnt;
    }
    return (answer);
}