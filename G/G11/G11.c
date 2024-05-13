/*В файле input.txt дано предложение. Необходимо определить,
сколько слов заканчиваются на букву 'а'. Ответ записать в
файл output.txt.*/

#include <stdio.h>

enum {R=1001};

int main (void) {
    FILE *f, *f1;
    char S1[R], S2[R];
    int c, n = 0;
    f = fopen ("input.txt", "r");
    f1 = fopen ("output.txt", "w");
    fscanf (f, "%[^\n]s", &S1);
    for (c = 0; c <=(R-1); c++) {
        if (S1[c] == '\0') break;
        }
    for (int i = 0; i < (c); i++) {
        if (((S1[i] == 'a') && (S1[i+1] == ' ')) || ((S1[i] == 'a') && (S1[i+1] == '\0')))  n++;
        }
    printf ("%d", n);
    fprintf (f1, "%d", n);
    fclose (f); fclose (f1);
}
