#include <stdio.h>
//������ ����� ����� � ������������� ���, ��� ����� ������ ����� ����� ��������� � �.�.

int main (void)
{
    int income;         //�������� �����
    int k=1;            //����������� �����
    int a;
    int b=0;


    scanf ("%d", &income);
    a = income;
    while (a > 0) {
        k = k*10;
        a = a/10;
        }
    k = k/10; //� �� ��� ������ ���� ������ �����
    while (income> 0) {
        b = b + ((income%10)*k);
        k=k/10;
        income = income/10;
        }
    printf ("%d", b);
}
