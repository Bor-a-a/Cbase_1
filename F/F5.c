/*Написать только одну функцию,
которая находит максимальный элемент в массиве.
Всю программу загружать не надо.
Прототип функции:
int find_max_array(int size, int a[])*/

#include <stdio.h>

enum {R = 50};

int find_max_array(int size, int a[]) {
    int max;
    max = a[0];
    for (int i = 0; i <= (size-1); i++) {
        if (a[i] > max) max = a[i];
        }
    return max;
    }

int main (void) {
    int a[R] = {2,5,7,11,22,0,-3,7,6,50,8,7,6,51,0,1,55,6};

    printf ("%d", find_max_array (R, a));
}
