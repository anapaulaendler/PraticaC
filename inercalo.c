#include <stdio.h>

    int main() {

        int a, b, soma = 0;

        scanf("%d %d", &a, &b);

        if (a > b) {
            while (b < a) {
                if (b % 2 == 0) {
                    printf("%d ", b);
                    soma += b;
                } b++;
            }
        } else if (b > a) {
            while (a < b) {
                if (a % 2 == 0) {
                    printf("%d ", a);
                    soma += a;
                } a++;
            }
        } else {
            printf("os numeros sao iguais. ");
        }
        printf("\n%d", soma);

        return 0;

    }