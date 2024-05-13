/*Определить количество положительных элементов квадратной матрицы,
превышающих по величине среднее арифметическое всех элементов
главной диагонали. Реализовать функцию среднее
арифметическое главной диагонали.*/

#include <stdio.h>

enum {R=5};

float scgd (int size, int a[][size]) {
    float result = 0;
    for (int i = 0; i <= (size-1); i++) {
        result += a[i][i];
        }
    result = result/size;
    return result;
    }

int main (void) {
    int M1[R][R];
    float sred = 0;
    int itog = 0;
    for (int i = 0; i <= (R-1); i++) {
        for (int j = 0; j <= (R-1); j++) {
            scanf ("%d", &M1[i][j]);
            }
        }
    sred = scgd (R, M1);
    for (int i = 0; i <= (R-1); i++) {
        for (int j = 0; j <= (R-1); j++) {
            if (M1[i][j] > sred) itog++;
            }
        }
    printf ("%d", itog);
    }
