/*В файле input.txt в одной строке фамилию, имя и отчество.
Сформировать файл приветствие output.txt, где останутся
имя и фамилия*/

#include <stdio.h>

enum {R=101};

int main (void) {
    FILE *f, *f1;
    char S1[R], S2[R], S3[R];
    int c, slash, flag = 0;
    f = fopen ("input.txt", "r");
    f1 = fopen ("output.txt", "w");
    fscanf (f, "%s %s %s", &S1, &S2, &S3);
    printf("Hello, %s %s!", S2, S1);
    fprintf (f1,"Hello, %s %s!", S2, S1);
    fclose (f); fclose (f1);
}
