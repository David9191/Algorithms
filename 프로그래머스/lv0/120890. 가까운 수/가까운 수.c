#include <stdlib.h>

int solution(int arr[], size_t len, int n) {
    int answer[2] = { 0, 101 }, diff = 0;

    for (int i = 0; i < len; i++)
    {
        diff = abs(n - arr[i]);
        if ((diff < answer[1])
           || (diff == answer[1] && arr[i] < arr[answer[0]]))
        {
            answer[0] = i;
            answer[1] = diff;
        }
    }
    return (arr[answer[0]]);
}