#include <stdio.h>
//¬вести целое число и определить, верно ли, что в нЄм ровно 3 цифры.


int main (void)
{
    int a;
    int res = 0;

    scanf ("%d", &a);
    while (a > 0) {
        a = a/10;
        res = res + 1;
        }
    if (res == 3) printf ("YES");
        else printf ("NO");

}
