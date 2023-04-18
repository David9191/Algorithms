#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// sides_len은 배열 sides의 길이입니다.
int solution(int sides[], size_t sides_len) {
    int max = 0, answer = 0, iter = 0, index = 0, other = 0;

    while (iter < sides_len)
    {
        if (max < sides[iter])
        {
            max = sides[iter];
            index = iter;
        }
        iter++;
    }
    for (iter = 0; iter < sides_len; iter++)
        if (iter != index)
            other += sides[iter];
    (max < other) ? (answer = 1) : (answer = 2);
    return (answer);
}