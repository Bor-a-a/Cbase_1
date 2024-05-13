//Считать массив из 12 элементов и выполнить циклический сдвиг ВПРАВО на 4 элемента.

#include <stdio.h>

int main (void) {
    enum {R = 12};
    int tmp = 0;
    int Mass[R] = {0};
    int Mass1[R] = {0};
    int j;

    for (int i = 0; i <= (R-1); i++) scanf("%d", &Mass [i]);

    for (int i = (R-1); i >= 0; i--) {
        j = i+4;
        if (j > R-1) j = j-R;
        Mass1[j] = Mass [i];
        }
    for (int i = 0; i <= (R-1); i++) printf("%d ", Mass1 [i]);
    }
