/*��������, ��� ��������� ����� ����� ����������� 8�8 � ������� �� ������ 2� ������,
��������, ������� � ������ (��. �������). ������ ������ ����� ����������, ���������
�� ����� � �����. �������������� ������������ ������ ������������ ������ �� A �� H,
� ������������ � ������ �� 1 �� 8. �������, ��� ������ � ����������� �1 ����� ������
����. ��������� �� �������� ���������� ���������� ���� ������.*/

#include <stdio.h>

enum {R=8};

int main (void) {
    int M1 [R][R];
    char str [2];
    char c;
    int p1, p2;
    for (int i = 0; i <= (R-1); i++) {
        for (int j=0; j<=(R-1); j++) {
            if (i%2 == 0) {
                if (j%2 == 0) M1[i][j] = 1; else M1[i][j] = 0;
                }
            else {
                if (j%2 == 0) M1[i][j] = 0; else M1[i][j] = 1;
                }
            }
        }
    /*for (int i = (R-1); i >= 0 ; i--) {
        for (int j = 0; j <= (R-1); j++) {
            printf ("%d ", M1[i][j]);
            }
        printf ("\n");
        }*/
    for (int i= 0; i <= 1; i++) {
        c = getchar ();
        str [i] = c;
        }
    p1 = str[0]-65;
    p2 = str[1]-49;
    if (M1[p1][p2] == 1) printf ("BLACK");
    else printf ("WHITE");
    }
