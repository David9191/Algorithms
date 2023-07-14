#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int count(int age)
{
    int cnt = 0;

    while (age > 0)
    {
        cnt++;
        age /= 10;
    }
    return (cnt);
}

char* solution(int age) {
    char cnt = count(age) - 1, *answer = (char*)calloc(1, count(age) + 1);

    while (age > 0)
    {
        answer[cnt--] = (age % 10) + 'a';
        age /= 10;
    }
    return (answer);
}