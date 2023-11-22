#include <stdio.h>
#include <stdlib.h>

void gerarSenha(int tamanho, int (*c)) {

    char num[] = "0123456789";
    char letra[] = "qwertyuiopasdfghjklzxcvbnm";
    char LETRA[] = "QWERTYUIOPASDFGHJKLZXCVBNM";
    char especial[] = "!&*%$?@#";
    char senha[tamanho + 1];
    int i, j;

    if ((*c) == 0) {
        for (j = 0; j < tamanho; j++) {
            i = rand() % 4;
            if (i == 0) {
                senha[j] = num[rand() % 10];
            } else if (i == 1) {
                senha[j] = letra[rand() % 26];
            } else if (i == 2) {
                senha[j] = LETRA[rand() % 26];
            } else if (i == 3) {
                senha[j] = especial[rand() % 8];
            } 
            printf("%c", senha[j]);
        }
    } else if ((*c) == 1) {
        for (j = 0; j < tamanho; j++) {
            i = rand() % 3;
            if (i == 0) {
                senha[j] = num[rand() % 10];
            } else if (i == 1) {
                senha[j] = letra[rand() % 26];
            } else if (i == 2) {
                senha[j] = LETRA[rand() % 26];
            }
            printf("%c", senha[j]);
        }
    }
}

int main() {

    int n = 0, c = 0;

    printf("Digite o comprimento da senha: ");
    scanf("%d", &n);

    printf("Digite:\n0: com caracteres especiais\n1: sem caracteres especiais\n");
    scanf("%d", &c);

    gerarSenha(n, &c);

    return 0;
}
