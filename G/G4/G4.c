/*В файле input.txt даны два слова не более 100 символов каждое, разделенные одним пробелом.
Найдите только те символы слов, которые встречаются в обоих словах только один раз.
Напечатайте их через пробел в файл output.txt в лексикографическом порядке.*/

#include <stdio.h>

enum {R=101};

int main (void) {
    FILE *f, *f1;
    char s1[R], s2[R], s3[R], tmp;
    int c1, c2, k = 0, flag = 1;
    f = fopen ("input.txt", "r");
    f1 = fopen ("output.txt", "w");
    fscanf (f, "%s %s", &s1, &s2);
    //Ищем длину первого слова
    for (c1 = 0; c1 <=(R-1); c1++) {
    if (s1[c1] == '\0') break;
    }
    printf("DONE");
    //Ищем длину второго слова
    for (c2 = 0; c2 <=(R-1); c2++) {
    if (s2[c2] == '\0') break;
    }
    printf("DONE");
    //Собираем в массив все совпадающие буквы.
    for (int i = 0; i <= (c1-1); i++) {
        for (int j = 0; j <= (c2-1); j++) {
            if (s1[i]==s2[j]) {
                s3[k] = s1[i];
                k++;
                break;
                printf ("%d", k);
                }
            }
        }
    s3[k] = '\0';
    printf("DONE");
    //Сортируем по порядку
    while (flag) {
        flag = 0;
        for (int i = 0; i < (k-1); i++) {
            if (s3[i] > s3[i+1]) {
                tmp = s3[i];
                s3[i] = s3[i+1];
                s3[i+1] = tmp;
                flag = 1;
                }
            }
        }
    printf("DONE");
    //Печатаем те, которые не повторяются
    for (int i = 0; i <= (k-1); i++) {
        flag = 0;
        for (int j = 0; j <=(k-1); j++) {
            if (s3[i] == s3[j]) flag++;
            }
        if (flag <= 1) fprintf (f1, "%c ", s3[i]);
        }
    printf("DONE");
    //printf ("%s\n", s3);
    //printf ("%s\n%s", s1, s2);
    //printf ("\n%d %d", c1, c2);
    fclose (f); fclose (f1);
    }
