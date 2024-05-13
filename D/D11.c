//Дано натуральное число N. Посчитать количество «1» в двоичной записи числа.

#include <stdio.h>

int count1 (int n) {
    if (n < 1) return 0;
    return ((n & 1) + count1 ((n >> 1)));
    }

int main (void) {
    int a;
    scanf ("%d", &a);
    a = count1 (a);
    printf ("%d", a);
    }
