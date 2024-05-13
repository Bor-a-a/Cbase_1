/*Написать только одну функцию, которая ставит в начало массива
все четные элементы, а в конец – все нечетные. Не нарушайте
порядок следования чисел между собой. Строго согласно прототипу:.
void sort_even_odd(int n, int a[])*/

#include <stdio.h>

enum {R = 20};

void sort_even_odd(int n, int a[]) {
    int flag = 1;
    int tmp;
    while (flag) {
        flag = 0;
        for (int i = 0; i < (n-1); i++) {
            if (((a[i+1]%2) == 0) && ((a[i]%2) != 0)) {
            //printf ("Change %d and %d\n", a[i+1],  a[i]);
            flag = 1;
            tmp = a[i+1];
            a[i+1] = a[i];
            a[i] = tmp;
            }
        }
    }
    for (int i = 0; i <= (n-1); i++) printf ("%d ", a[i]);
}

int main (void) {
    int M1 [R] = {20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    //{1, 0, 1, 0, 1};
    sort_even_odd (R, M1);
    }
