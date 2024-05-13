#include <stdio.h>
//Ввести натурально число и напечатать все числа от 10 до введенного числа - у которых сумма цифр равна произведению цифр

int main (void)
{
    int income;          //Вводимое число
    int prz = 1;         //Произведение
    int sum = 0;         //Сумма
    int a;               //Текущее число
    int dob;             //Добавка


    scanf ("%d", &income);

    for (int i=10; i <= income; i++) {
        a = i;
        sum = 0;
        prz = 1;
        while (a > 0) {
            //dob = a%10;
            sum = sum + a%10;//dob;
            prz = prz * a%10;//dob;
            a = a/10;
            //printf ("%d %d %d %d\n", i, a, sum, prz);
            }
        if (sum == prz) printf ("%d ", i);
        }
}
