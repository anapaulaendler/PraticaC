#include <stdio.h>

    int main() {

        int a, b, cont, prog;

        printf("digite seu termo inicial: ");
        scanf("%d", &a);

        printf("digite sua razao: ");
        scanf("%d", &b);

        for (cont = 1; cont <= 10; cont++) {
            b = (b pow (cont - 1));
            prog = a * b;
            printf("%d\n", prog);
        }

        return 0;

    }
