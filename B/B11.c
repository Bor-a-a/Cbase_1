#include <stdio.h>
//Ввести целое число и «перевернуть» его, так чтобы первая цифра стала последней и т.д.

int main (void)
{
    int income;         //Вводимое число
    int k=1;            //Разрядность числа
    int a;
    int b=0;


    scanf ("%d", &income);
    a = income;
    while (a > 0) {
        k = k*10;
        a = a/10;
        }
    k = k/10; //а то там лишний знак всегда будет
    while (income> 0) {
        b = b + ((income%10)*k);
        k=k/10;
        income = income/10;
        }
    printf ("%d", b);
}
