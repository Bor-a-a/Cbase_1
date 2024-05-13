/*Составить функцию которая возвращает количество элементов на
заданном отрезке [from, to] для массива. Количество элементов,
значение которых лежит в заданном интервале.
Прототип функции
int count_between(int from, int to, int size, int a[])*/

#include <stdio.h>

int count_between(int from, int to, int size, int a[]) {
    int result = 0;
    for (int i = 0; i <=(size-1); i++) {
        if ((a[i] >= from) && (a[i] <=to)) result++;
        }
    return result;
    }
int main (void) {
    //int M1[10] = {1,2,3,4,5,6,7,8,9,0};
    //int M1[6] = {1, 1, 2, 5, 3, 0};
    int M1[10] = {1, 1, 2, 5, 3, 0, 100, 101, 99, 99};
    printf ("%d", count_between(99,101,10,M1));
    }

