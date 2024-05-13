/*—читать массив из 10 элементов и отобрать в
другой массив все числа, у которых число дес€тков Ц ноль.*/

#include <stdio.h>

int des0 (int a) {
    a = a/10;
    if ((a%10) == 0) return 1; else return 0;
    }

int main (void)
{
    enum {R = 10};
    int M1[R] = {0};
    int M2[R] = {0};
    int j=0;

    for (int i = 0; i <= (R-1); i++) scanf("%d", &M1 [i]);

    for (int i = 0; i <= (R-1); i++) {
        if (des0 (M1[i])) {
            M2[j] = M1 [i];
            j +=1;
            }
        }
    for (int i = 0; i <= (j-1); i++) printf("%d ", M2 [i]);
}

