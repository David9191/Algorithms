#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int n) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int len = 0;
    (n % 3 == 0) ? (len = (n / 2) + 1) : (len = (n / 2));
    int* answer = (int*)calloc(sizeof(int), len);

    for (int i = 0, k = 1; k <= n; k += 2)
        answer[i++] = k;
    return (answer);
}