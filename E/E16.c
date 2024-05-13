/* Дан массив из 10 элементов. Определить, какое число в
массиве встречается чаще всего. Гарантируется, что такое
число ровно 1.*/

#include <stdio.h>


int main (void)
{
    enum {R = 10};
    int M1[R] = {0};
    int M2[R] = {0};
    int cnt = 0;
    int max = 0; int imax = 0;

    for (int i = 0; i <= (R-1); i++) scanf("%d", &M1 [i]);

    for (int i = 0; i <= (R-1); i++) {
        cnt = 0;
        for (int j = i; j <= (R-1); j++) {
            if (M1[j] == M1[i]) cnt +=1;
            }
        if (cnt > max) {
            max = cnt;
            imax = i;
            }
        }


    printf ("%d", M1[imax]);
}
