/*Составить логическую функцию, которая определяет, верно ли,
что в заданном числе сумма цифр равна произведению.
int is_happy_number(int n)*/

#include <stdio.h>

int is_happy_number(int n) {
    int prz = 1;         //Произведение
    int sum = 0;         //Сумма
    int dop = 0;
    if (n == 0) return 1;
    while (n > 0) {
        dop = n%10;
        sum = sum + dop;
        prz = prz * dop;
        n = n/10;
            }
    if (sum == prz) return 1;
    else return 0;
}

int main (void)
{
    int p1;          //Вводимое число
    scanf ("%d", &p1);
    if (is_happy_number (p1) == 1) printf ("YES"); else printf ("NO");

}
