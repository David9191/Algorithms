#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int real_n;
    int sum;
    
    real_n = n;
    sum = 0;
    if (real_n % 2 != 0)
        real_n -= 1;
    for (; real_n > 0; real_n -= 2)
        sum += real_n;
    return (sum);
}