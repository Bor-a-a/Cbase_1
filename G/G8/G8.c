/*� ����� input.txt ���� ������, �� ����� 1000 ��������, ���������� �����, ����� ����� � ���� �������.
��������� ��� �����, ������� ����������� � ������, ��������� � ��������� ������������� ������.
��������, ���� ���� ������ "data 48 call 9 read13 blank0a", �� � ������� ����� 48, 9, 13 � 0.
������� ������ �� ����������� � ���� output.txt.*/

#include <stdio.h>

enum {R=1001};

int main (void) {
    FILE *f, *f1;
    char S[R];
    int M1[R];
    int c, g,tmp, n=0, flag = 1;
    f = fopen ("input.txt", "r");
    f1 = fopen ("output.txt", "w");
    fscanf (f, "%[^\n]s", &S);
     for (c = 0; c <=(R-1); c++) {
        if (S[c] == '\0') break;
        }
    /*for (int i = 0; i <= (c-1); i++) {
        if (S[i] >= '0' && S[i] <= '9') {
            M1[n] = S[i]-48;
            n++;
            }
        }*/
    while (fscanf (f, "%d", &g) == 1) {M1[n] = g; n++; printf("%d %d\n", n, M1[n]);}
    while (flag) {
    flag = 0;
        for (int i = 0; i < (n-1); i++) {
            if (M1[i] > M1[i+1]) {
                tmp = M1[i];
                M1[i] = M1[i+1];
                M1[i+1] = tmp;
                flag = 1;
                }
            }
        }
    for (int i = 0; i <= (n-1); i++) {
        printf ("%d ", M1[i]);
        fprintf (f1, "%d", M1[i]);
        }
    fclose (f); fclose (f1);
    }
