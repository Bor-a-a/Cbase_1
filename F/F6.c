/*�������� ������ ���� ���������� �������,
������� ����������, ����� ��, ��� �����
��������� ������� ���� ��� ����������.
���� ����� ���, ������� ���������� 1; ���� ����� ����,
�� 0. ������ �������� ���������:
int is_two_same(int size, int a[]);*/

#include <stdio.h>

enum {SIZE = 10};

int is_two_same(int size, int a[]) {
    int flag = 0;
    for (int i = 0; i <= (size-1); i++) {
        if (flag != 0) break;
        for (int j=i+1; j <= (size-1); j++) {
            if (a[i] == a[j]) {
                flag = 1;
                break;
                }
            }
        }
    if (flag != 0) return 1; else return 0;
    }

int main (void) {
    int M1[SIZE] = {1,2,3,4,5,6,7,8,1,0};
    printf ("%d", is_two_same(SIZE, M1));
}
