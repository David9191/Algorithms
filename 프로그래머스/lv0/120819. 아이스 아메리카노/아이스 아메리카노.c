#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int money) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int ame_price = 5500, *answer = (int*)calloc(sizeof(int), 2);

    answer[0] = money / ame_price;
    answer[1] = money % ame_price;
    return (answer);
}