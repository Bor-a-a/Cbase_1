#include <stdio.h>


int main (void)
{
    int a;
    int b;
    int summ = 0;

    scanf ("%d %d", &a, &b);
    //if (a > 100 || a < -100) return 1;
    //if (b > 100 || b < -100) return 1;
    if (b < a) return 1;

    for (int i = a; i < (b+1); i++)
        {
        summ += i*i;
        }
    printf ("%d", summ);

}
