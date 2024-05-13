//Составить функцию, которая определяет сумму всех чисел от 1 до N и привести пример ее использования.
#include <stdio.h>
int factor (int x)
    {
    int result=0;
    for (int i = 1; i <= x; i++)
        {
        result = result + i;
        }
    return result;
    }


int main (void)
{
    int p1 = 0;
    scanf ("%d", &p1);
    p1 = factor (p1);
    printf ("%d",p1);
}
