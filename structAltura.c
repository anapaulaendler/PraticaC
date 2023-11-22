#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[50];
    int altura;
} pessoa;

int main() {

    pessoa p[10];
    int media = 0;

    for (int i = 0; i < 10; i++) {
        
        fflush(stdin);
        int lixo = getchar();
        scanf("%[^\n]s", p[i].nome);
        scanf("%d", &p[i].altura);
        media += p[i].altura;
    }

    for (int i = 0; i < 10; i++) {
        if (p[i].altura <= 150) {
            printf("%s, %d cm\n", p[i].nome, p[i].altura);
        } else if (p[i].altura > 150 && p[i].altura <= 180) {
            printf("%s, %d cm\n", p[i].nome, p[i].altura);
        } else if (p[i].altura > 180) {
            printf("%s, %d cm\n", p[i].nome, p[i].altura);
        }
    }

    printf("media: %d cm\n", media / 10);

    for (int i = 0; i < 10; i++) {
        if (p[i].altura > media) {
            printf("%s, %d cm\n", p[i].nome, p[i].altura);
        }
    }

    return 0;
}
