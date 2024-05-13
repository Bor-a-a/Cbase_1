#include <stdio.h>
//¬вести целое число и определить, верно ли, что все его цифры четные.

int main (void)
{
    int income;         //¬водимое число
    int flag = 0;       //‘лаг нечетности


    scanf ("%d", &income);

    while (income > 0) {
        if ((income%2) == 1) flag += 1;
        income = income/10;
    }
    if (flag == 0) printf ("YES"); else printf ("NO");
}
