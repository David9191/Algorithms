#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* str1, const char* str2) {
    int answer = 2, i, k, str1_len = strlen(str1), str2_len = strlen(str2);

    for (i = 0; i < str1_len; i++)
    {
        k = 0;
        while (str1[i] == str2[k])
        {
            if (++k == str2_len)
            {
                answer = 1;
                break;
            }
            i++;
        }
        if (k == str2_len)
            break;
        i -= k;
    }
    return (answer);
}