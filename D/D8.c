/*��������� ����������� �������, �������� ��� ����� �� A �� B
������������, � ������� �����������, ���� A < B, ��� � �������
�������� � ��������� ������.*/

#include <stdio.h>

void f1 (int a, int b) {
    if (a == b) {
        printf ("%d",a);
        return;
        }
    printf ("%d ", a);
    if (a > b) f1 (a-1, b);
    if (a < b) f1 (a+1, b);
    }

int main (void) {
    int a, b;
    scanf ("%d %d", &a, &b);
    f1 (a, b);
    }
