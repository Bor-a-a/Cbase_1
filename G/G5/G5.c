/*В файле input.txt дана символьная строка не более 1000 символов.
Необходимо заменить все буквы "а" на буквы "b" и наоборот,
как заглавные, так и строчные. Результат записать в output.txt.*/

#include <stdio.h>

enum {R=1001};

int main (void) {
    FILE *f, *f1;
    char S[R];
    int M1[R] = {0};
    int c;
    f = fopen ("input.txt", "r");
    f1 = fopen ("output.txt", "w");
    fscanf (f, "%[^\n]s", &S);
     for (c = 0; c <=(R-1); c++) {
        if (S[c] == '\0') break;
    }
    for (int i = 0; i <= (c-1); i++) {
        if (S[i] == 'A' || S[i] == 'a') {S[i]++; continue;}
        if (S[i] == 'B' || S[i] == 'b') S[i]--;
        }
    fprintf (f1, "%s", S);
    fclose (f); fclose (f1);
}
