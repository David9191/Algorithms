#include <stdio.h>

int    main(void) {
    int    n, students, score, total, cnt;
    double    avg = 0, rate = 0;
    
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &students);
        int    arr[students];
        total = 0;
        for (int j = 0; j < students; j++) {
            scanf("%d", &score);
            arr[j] = score;
            total += score;
        }
        avg = (total / students);
        cnt = 0;
        for (int j = 0; j < students; j++)
            if (arr[j] > avg)
                cnt++;
        rate = ((double)cnt / (double)students) * 100;
        printf("%.3lf%%\n", rate);
    }
    return (0);
}