#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int denum1, int num1, int denum2, int num2) {
    int* answer = (int*)malloc(8), num = num1 * num2, denum = (denum1 * num2) + (denum2 * num1);

    for (int i = num; i > 1; i--)
        if ((num % i) == 0 && (denum % i) == 0)
        {
            num /= i;
            denum /= i;
            i = num;
        }
    answer[0] = denum;
    answer[1] = num;
    return (answer);
}