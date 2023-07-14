#include <stdio.h>
#include <stdlib.h>

int** solution(int list[], size_t len, int n) {
    int i = 0, k = 0, **answer = (int**)malloc(sizeof(int) * (len / n + 1));
    for (int j = 0; j <= (len / n); j++)
        answer[j] = (int *)malloc(sizeof(int) * n);

    while (i < len)
    {   
        for (int q = 0; ((q < n) && (i < len)); q++)
            answer[k][q] = list[i++];
        k++;
    }
    return (answer);
}