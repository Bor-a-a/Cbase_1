/*��� ������������� ������ �� 10 ���������. ���������� ����������
���������� ������ � �������� �����. ���� ���������� ������ �����
������, ��� ���������� ��������, �������� ������ �������� �����
�� ������������ �������� ���� � ��� ���������� ������. ����
���������� �������� ����� ������ ��� ����� ���������� ������,
 �������� ������ ������ ����� �� ������������ ������ ����
� ��� ���������� ������.*/

#include <stdio.h>

enum {R=10};

int even_f2 (int a) {
 int result=1;
 int tmp;
 while (a>0) {
    tmp = a%10;
    if ((tmp%2) == 0) result = result*tmp;
    a = a/10;
    }
return result;
}

int uneven_f2 (int a) {
 int result=1;
 int tmp;
 while (a>0) {
    tmp = a%10;
    if ((tmp%2) != 0) result = result*tmp;
    a = a/10;
    }
return result;
}

void even_f (int size, int a[]) {
    for (int i = 0; i <= (size-1); i++) {
        if ((a[i]%2) == 0) a[i] = even_f2 (a[i]);
        }
    }

void uneven_f (int size, int a[]) {
    for (int i = 0; i <= (size-1); i++) {
        if ((a[i]%2) != 0) a[i] = uneven_f2 (a[i]);
        }
    }

int main  (void) {
    int M1[R];
    int evens =0;
    int unevens = 0;
    for (int i = 0; i <= (R-1); i++) scanf ("%d", &M1[i]);
    for (int i = 0; i <= (R-1); i++) {
        if ((M1[i]%2) == 0) evens++;
        else unevens++;
        }
    if (evens > unevens) uneven_f (R, M1); else even_f (R, M1);
    for (int i = 0; i <= (R-1); i++) printf ("%d ", M1[i]);
    }

