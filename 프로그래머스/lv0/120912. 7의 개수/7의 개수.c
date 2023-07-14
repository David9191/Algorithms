#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int count(int n)
{
    int cnt = 0;
    
    while (n > 0)
    {
        if (n % 10 == 7)
            cnt++;
        n /= 10;
    }
    return (cnt);
}

int solution(int array[], size_t array_len) {
    int answer = 0;

    for (int i = 0; i < array_len; i++)
        answer += count(array[i]);
    return (answer);
}