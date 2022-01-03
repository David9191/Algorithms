#include <stdio.h>

int    main(void)
{
    int    fir, sec, fir_max, sec_max,
        fir_min, sec_min, max = 0, min = 0;

    scanf("%d %d", &fir, &sec);
    fir_max = fir;
    sec_max = sec;
    while (fir_max) {
        if (fir % fir_max == 0)
            while (sec_max >= fir_max)
                if (sec % sec_max == 0 && fir_max == sec_max) {
                    max = fir_max;
                    break ;
                } else
                    sec_max--;
        if (max == fir_max)
            break;
        fir_max--;
    }
    fir_min = fir; // 10
    sec_min = sec; // 10
    while (fir_min) {
        if (fir_min % fir == 0)
            while (sec_min <= fir_min)
                if (sec_min % sec == 0 && fir_min == sec_min) {
                    min = fir_min;
                    break ;
                } else
                    sec_min++;
        if (min == fir_min)
            break ;
        fir_min++;
    }
    printf("%d\n%d\n", max, min);
}
