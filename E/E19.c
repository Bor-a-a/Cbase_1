/*Вывести в порядке следования цифры,
входящие в десятичную запись натурального числа N.*/

#include <stdio.h>

void ext (long long int a) {
    int b;
    if (a == 0) return;
    b = a%10;
    ext (a/10);
    printf ("%d ", b);
}

int main (void) {
    long long int a;

    scanf ("%lld", &a);
    if (a == 0) printf ("%d", a);
    else ext (a);
}
