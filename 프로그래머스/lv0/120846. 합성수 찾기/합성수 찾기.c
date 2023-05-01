#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int count(int n)
{
    for (int i = 2; i < n; i++)
        for (int k = n - 1; k > 1; k--)
            if ((i * k) == n)
                return (1);
    return (0);
}

int solution(int n) {
    int answer = 0;

    for (int i = 4; i <= n; i++)
        answer += count(i);
    return (answer);
}