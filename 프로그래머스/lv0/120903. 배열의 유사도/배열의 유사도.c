#include <stdio.h>
#include <string.h>

int solution(const char* s1[], size_t s1_len, const char* s2[], size_t s2_len) {
    int answer = 0;
    
    for (int i = 0; i < s1_len; i++)
        for (int k = 0; k < s2_len; k++)
            if (!strcmp(s1[i], s2[k]))
                answer++;
    return (answer);
}