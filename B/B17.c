#include <stdio.h>
//������ ���������� ����� � ���������� ��� ����� �� 10 �� ���������� ����� - � ������� ����� ���� ����� ������������ ����

int main (void)
{
    int income;          //�������� �����
    int prz = 1;         //������������
    int sum = 0;         //�����
    int a;               //������� �����
    int dob;             //�������


    scanf ("%d", &income);

    for (int i=10; i <= income; i++) {
        a = i;
        sum = 0;
        prz = 1;
        while (a > 0) {
            //dob = a%10;
            sum = sum + a%10;//dob;
            prz = prz * a%10;//dob;
            a = a/10;
            //printf ("%d %d %d %d\n", i, a, sum, prz);
            }
        if (sum == prz) printf ("%d ", i);
        }
}
