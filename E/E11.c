//—читать массив из 10 элементов и отсортировать его по последней цифре.

#include <stdio.h>

int lc (int a) {
    return (a%10);
    }

int main (void) {
    enum {R = 10};
    int tmp = 0;
    int Mass[R] = {0};
    int flag = 1;

   for (int i = 0; i <= (R-1); i++) scanf("%d", &Mass [i]);

    while (flag) {
        flag = 0;
        for (int i = 0; i < (R-1); i++) {
            if (lc (Mass [i]) > lc (Mass [i+1])) {
                tmp = Mass [i];
                Mass [i] = Mass [i+1];
                Mass [i+1] = tmp;
                flag = 1;
                }
            }
        }
    for (int i = 0; i <= (R-1); i++) printf("%d ", Mass [i]);

}

