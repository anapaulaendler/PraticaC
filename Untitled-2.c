#include <stdio.h>

    int main() {

        int valor;

        scanf("%d", &valor);

        while (valor > 0) {
            for (i = 1; i <= valor; i++) {
                printf("*");
                } valor--;
        }
        return 0;

    }