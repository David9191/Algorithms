#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int i, answer = 1;

    for (i = 1; answer * i <= n; i++)
        answer *= i;
    return (--i);
}