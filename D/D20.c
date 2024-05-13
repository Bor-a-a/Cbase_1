/*Написать рекурсивную функцию возведения целого числа n в степень p.
int recurs_power(int n, int p)
Используя данную функцию, решить задачу.*/

#include <stdio.h>

int recurs_power(int n, int p) {
    if (p == 0) return 1;
    if (p == 1) return n;
    return (n*recurs_power (n, p-1));
    }

int main (void) {
    int a, b, res;
    scanf ("%d %d", &a, &b);
    res = recurs_power(a, b);
    printf ("%d",res);
    }
