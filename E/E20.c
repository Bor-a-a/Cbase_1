//Переставить цифры в числе так, что бы получилось максимальное число.

#include <stdio.h>

int main (void) {
    enum {R=20};
    long int a;
    int arr [R];
    int i = 0;
    int flag = 1;
    int tmp = 0;

    scanf ("%ld", &a);

    while (a > 0) {
        arr [i] = a%10;
        a = a/10;
        i+=1;
        }
     while (flag) {
        flag = 0;
        for (int j = 0; j < (i-1); j++)
        {
            if (arr [j] < arr [j+1])
            {
                tmp = arr [j];
                arr [j] = arr [j+1];
                arr [j+1] = tmp;
                flag = 1;
            }
        }
     }
for (int j = 0; j <= (i-1); j++) printf ("%d", arr[j]);

}
