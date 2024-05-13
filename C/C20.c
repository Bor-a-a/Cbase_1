//Проверить строку состоящую из скобок "(" и ")" на корректность.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

signed int scobtest (char c) {
    signed int result = 0;
    if (c == ')') result = -1;
    if (c == '(') result = 1;
    return result;
    }

int main (void)
{
    char str[1000] = "", *p = NULL;
    int count = 0;
    signed int tek = 0;

    p = fgets (str, 1000, stdin);

    for (int i = 0; i < 1000; i++)
        {
        if (str [i] == '.') {
                str [i] = '\0';
                break;}
        tek = scobtest (str [i]);
        count = count + tek;
        //printf ("%d", count);
        if (count < 0) break;
        }
    if (count == 0) printf ("YES");
    else printf ("NO");
}
