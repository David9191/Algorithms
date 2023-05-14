#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

void    sort_arr(int *arr, size_t len)
{
    int temp = 0;

    for (int i = 0; i < len; i++)
        for (int k = i + 1; k < len; k++)
            if (arr[i] > arr[k])
            {
                temp = arr[i];
                arr[i] = arr[k];
                arr[k] = temp;
            }
}

int count(int *arr, int n, int len)
{
    int cnt = 0;

    for (int i = n; i < len; i++)
        if (arr[n] == arr[i])
            cnt++;
    return (cnt);
}

int solution(int arr[], size_t len) {
    int answer = 0, arr_max[2] = { -2, -2 }, cnt = 0;

    sort_arr(arr, len);
    for (int i = 0; i < len; i++)
    {
        cnt = count(arr, i, len);
        if (cnt > arr_max[1])
        {
            arr_max[0] = arr[i];
            arr_max[1] = cnt;
        }
        else if (cnt == arr_max[1])
            arr_max[0] = -1;
    }
    answer = arr_max[0];
    return (answer);
}