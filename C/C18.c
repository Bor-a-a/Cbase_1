/*Составить логическую функцию, которая определяет, что текущий символ это цифра.
Написать программу считающую количество цифр в тексте. int is_digit(char c)*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int is_digit(char c) {
    if (c >= '0' && c <= '9') return 1;
    else return 0;
    }

int main (void)
{
    char str[256] = "", *p = NULL;
    int count = 0;

    p = fgets (str, 256, stdin);

    for (int i = 0; i < 256; i++)
        {
        if (str [i] == '.') {
                str [i] = '\0';
                break;}
         if (is_digit (str [i]) == 1) count++;
        }
    printf ("%d", count);

}
