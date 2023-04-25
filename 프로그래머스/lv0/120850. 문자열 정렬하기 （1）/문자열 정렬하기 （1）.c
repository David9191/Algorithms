#include <stdlib.h>

int* solution(const char* str) {
    int* answer = (int*)malloc(400), cnt = 0, temp = 0;

    for (int i = 0; *str; str++)
        if (48 <= *str && *str <= 57)
        {
            answer[i++] = *str - '0';
            cnt++;
        }
    for (int i = 0; i < cnt; i++)
        for (int k = i + 1; k < cnt; k++)
            if (answer[i] > answer[k])
            {
                temp = answer[i];
                answer[i] = answer[k];
                answer[k] = temp;
            }
    return (answer);
}