#include <stdio.h>

    int main() {

        int a, b, i, m;

        scanf("%d %d", &a, &b);

        while ( a <= b) {
            for (i = 1; i <= 10; i++) {
                m = a * i;
                print("%d \n", m);
            }
            a++;
        }
        return 0;

    }