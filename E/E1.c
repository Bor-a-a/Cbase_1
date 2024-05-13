/*¬вести c клавиатуры массив из 5 элементов,
найти среднее арифметическое всех элементов массива.*/

#include <stdio.h>

int main (void) {
    enum {R = 5};
    int Mass[R];
    float res;
    scanf ("%d %d %d %d %d", &Mass[0], &Mass[1], &Mass[2], &Mass[3], &Mass[4]);
    res = (Mass[0] + Mass[1] + Mass[2] + Mass[3] + Mass[4])/(float)R;
    printf ("%.3f", res);
    }
