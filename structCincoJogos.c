#include <stdio.h>
#include <string.h>

typedef struct {
    char data[12];
    char timeM[20];
    char timeV[20];
    int golM;
    int golV;
} jogo;

int main() {

    jogo j[5];

    for (int i = 0; i < 5; i++) {

        fflush(stdin);
        getchar();
        fgets(j[i].data, sizeof(j[i].data), stdin);
        fflush(stdin);
        fgets(j[i].timeM, sizeof(j[i].timeM), stdin);
        fflush(stdin);
        fgets(j[i].timeV, sizeof(j[i].timeV), stdin);
        scanf("%d", &j[i].golM);
        scanf("%d", &j[i].golV);

    }

    for (int i = 0; i < 5; i++) {

        if (j[i].golV > j[i].golM) {
            printf("vitoria do time %s\n", j[i].timeV);
        } else if (j[i].golV < j[i].golM) {
            printf("vitoria do time %s\n", j[i].timeM);
        } else {
            printf("empate!\n");
        }

    }

    return 0;
}