#include <stdio.h>
//Составить функцию, которая определяет наибольший общий делитель двух натуральных и привести пример ее использования. int nod(int a, int b)

int nod(int a, int b) {
    while (a%b != 0) {

        if (a > b) {
            while (a > b) a = a-b;
            }
        else {
            while (b > a) b = b-a;
            }
        }
    if (a < b) return a; else return b;
    }


int main (void)
{
    int a=0;
    int b=0;
    int itog=0;
    scanf ("%d %d", &a, &b);
    itog = nod (a, b);
    printf ("%d", itog);
}
