#include <stdio.h>
//������ ����� ����� � ����������, ����� ��, ��� ��� ��� ����� ������.

int main (void)
{
    int income;         //�������� �����
    int flag = 0;       //���� ����������


    scanf ("%d", &income);

    while (income > 0) {
        if ((income%2) == 1) flag += 1;
        income = income/10;
    }
    if (flag == 0) printf ("YES"); else printf ("NO");
}
