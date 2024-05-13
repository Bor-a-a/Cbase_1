/*В файле input.txt записан полный адрес файла (возможно, без расширения).
Необходимо изменить его расширение на ".html" и записать результат
в файл output.txt.*/

#include <stdio.h>

enum {R=1001};

int main (void) {
    FILE *f, *f1;
    char S1[R];
    int c, slash, flag = 0;
    f = fopen ("input.txt", "r");
    f1 = fopen ("output.txt", "w");
    fscanf (f, "%[^\n]s", &S1);
    for (c = 0; c <=(R-1); c++) {
        if (S1[c] == '\0') break;
        }
    for (int i = 0; i <= (c-1); i++) if (S1[i] == '/') slash = i;
    for (int i = slash; i<= (c-1); i++) if (S1[i] == '.') {
        S1[i+1] = 'h'; S1[i+2] = 't'; S1[i+3] = 'm'; S1[i+4] = 'l';
        S1[i+5] = '\0';
        flag = 1;
        }
        if (flag == 0) {
        S1[c]='.';
        S1[c+1] = 'h'; S1[c+2] = 't'; S1[c+3] = 'm'; S1[c+4] = 'l';
        S1[c+5] = '\0';
        }
    printf ("%c\n", S1[c]);
    printf("%s", S1);
    fprintf (f1, "%s",S1);
    fclose (f); fclose (f1);
}
