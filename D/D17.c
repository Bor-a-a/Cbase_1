/*������� ��������� ������������ ���������� ��� ��������������� ����� ����� m � n ��������� �������:
���������� ������ ������� �� ���������
int akkerman(int m, int n)*/

#include <stdio.h>

int akkerman(int m, int n) {
    if (m == 0) return (n+1);
    if (m > 0 && n == 0) return akkerman(m - 1, 1);
    return akkerman(m-1, akkerman(m, n-1));
    }

int main (void) {
    int a, b, res;
    scanf ("%d %d", &a, &b);
    res = akkerman (a, b);
    printf ("%d", res);
    }
