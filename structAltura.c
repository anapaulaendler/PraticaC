#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[50];
    float altura;
} Pessoa;

int main() {
    Pessoa pessoas[10];
    int opcao;
    float media = 0;

    do {
        printf("\nmenu:\n");
        printf("1. cadastrar os 10 registros\n");
        printf("2. apresentar os registros das pessoas com 1.50m ou menores\n");
        printf("3. apresentar os registros das pessoas com mais de 1.50m\n");
        printf("4. apresentar os registros das pessoas com mais de 1.5m e menos de 1.80m\n");
        printf("5. calcular a média das alturas e apresentar os registros das pessoas acima da média\n");
        printf("0. sair\n");
        printf("escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                for (int i = 0; i < 10; i++) {
                    printf("digite o nome da pessoa %d: ", i + 1);
                    scanf("%s", pessoas[i].nome);

                    printf("digite a altura da pessoa %d (em metros): ", i + 1);
                    scanf("%f", &pessoas[i].altura);

                    media += pessoas[i].altura;
                }
                media /= 10;
                break;

            case 2:
                printf("\nregistros das pessoas com 1.50m ou menores:\n");
                for (int i = 0; i < 10; i++) {
                    if (pessoas[i].altura <= 1.50) {
                        printf("%s, %.2fm\n", pessoas[i].nome, pessoas[i].altura);
                    }
                }
                break;

            case 3:
                printf("\nregistros das pessoas com mais de 1.50m:\n");
                for (int i = 0; i < 10; i++) {
                    if (pessoas[i].altura > 1.50) {
                        printf("%s, %.2fm\n", pessoas[i].nome, pessoas[i].altura);
                    }
                }
                break;

            case 4:
                printf("\nregistros das pessoas com mais de 1.50m e menos de 1.80m:\n");
                for (int i = 0; i < 10; i++) {
                    if (pessoas[i].altura > 1.50 && pessoas[i].altura < 1.80) {
                        printf("%s, %.2fm\n", pessoas[i].nome, pessoas[i].altura);
                    }
                }
                break;

            case 5:
                printf("\nregistros das pessoas acima da média de altura (%.2fm):\n", media);
                for (int i = 0; i < 10; i++) {
                    if (pessoas[i].altura > media) {
                        printf("%s, %.2fm\n", pessoas[i].nome, pessoas[i].altura);
                    }
                }
                break;

            case 0:
                printf("Saindo do programa.\n");
                break;

            default:
                printf("Opção inválida. Tente novamente.\n");
        }
    } while (opcao != 0);

    return 0;
}
