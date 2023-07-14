#include <stdio.h>

int count(int i, int k)
{
    int cnt = 0;

    while (i > 0)
    {
        if (i % 10 == k)
            cnt++;
        i /= 10;
    }
    return (cnt);
}

int solution(int i, int j, int k) {
    int answer = 0;

    for (; i <= j; i++)
        answer += count(i, k);
    return (answer);
}