/*В файле input.txt строка из меленьких и больших английских букв, знаков препинания и пробелов.
Требуется удалить из нее повторяющиеся символы и все пробелы. Результат записать в
файл output.txt.*/

#include <stdio.h>

enum {R=1001};

int main (void) {
    FILE *f, *f1;
    char S1[R], S2[R];
    int c, n = 0, flag = 1;
    f = fopen ("input.txt", "r");
    f1 = fopen ("output.txt", "w");
    fscanf (f, "%[^\n]s", &S1);
    for (c = 0; c <=(R-1); c++) {
        if (S1[c] == '\0') break;
        }
    for (int i = 0; i <= (c-1); i++) {
        flag = 0;
        if (((S1[i] < 'A') || (S1[i] > 'Z')) && ((S1[i] < 'a') || (S1[i] > 'z'))) continue;
        printf ("%c\n", S1[i]);
        for (int j = n; j >=0; j--) if (S1[i] == S2[j]) flag = 1;
        if (flag == 0) {
            S2[n] = S1[i];
            //printf ("%c\n", S1[i]);
            n++;
            }
        }
    S2[n] = '\0';
    printf ("%s", S2);
    fprintf (f1, "%s", S2);
    fclose (f); fclose (f1);
}
