int solution(int arr[], int numbers_len) {
    int max = -100000000;

    for (int i = 0; i < numbers_len; i++)
        for (int k = i + 1; k < numbers_len; k++)
            if ((arr[i] * arr[k]) > max)
                max = arr[i] * arr[k];
    return (max);
}