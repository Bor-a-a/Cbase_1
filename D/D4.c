/*Дано натуральное число N. Выведите все его цифры по одной,
в прямом порядке, разделяя их пробелами или новыми строками.
Необходимо реализовать рекурсивную функцию.
void print_num(int num)*/

#include <stdio.h>

void print_num(int num) {
    if (num == 0) {;
        return;
        }
    print_num (num/10);
    printf ("%d\n", num%10);

    }



int main (void) {
    int a;

    scanf ("%d", &a);
    if (a == 0) printf ("%d", a);
    else print_num (a);
    }

