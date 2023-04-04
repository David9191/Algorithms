#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int angle) {
    int degree;

    if (0 < angle && angle < 90)
        degree = 1;
    else if (angle == 90)
        degree = 2;
    else if (90 < angle && angle < 180)
        degree = 3;
    else if (angle == 180)
        degree = 4;
    return (degree);
}