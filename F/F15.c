/*Составить функцию которая определяет в массиве,
состоящем из положительных и отрицательных чисел,
сколько элементов превосходят по модулю
максимальный элемент.
Прототип функции int count_bigger_abs(int n, int a[]);*/

#include <stdio.h>

int count_bigger_abs(int n, int a[]) {
    int max = a[0];
    int result = 0;
    for (int i = 0; i <= (n-1); i++) {
        if (a[i] > max) max = a[i];
        }
    for (int i = 0; i <= (n-1); i++) {
        if ((a[i] < 0) && ((a[i]*-1) > max)) result++;
        }
    return result;
    }

int main (void) {
    int M1[6] = {5, -6, -7, -8, -9, -10};
    printf ("%d", count_bigger_abs(6, M1));
    }
