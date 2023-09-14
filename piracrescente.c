#include <stdio.h>

int main() {
    int altura, i, j;

    printf("Digite a altura da pirâmide: ");
    scanf("%d", &altura);

    for (i = 1; i <= altura; i++) {
        for (j = 1; j <= i; j++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
