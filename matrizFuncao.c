#include <stdio.h>
#include <stdlib.h>

void funcaoUm(int matriz[4][4], int *l, int *c) {
    for ((*l) = 0; (*l) < 4; (*l)++) {
        for ((*c) = 0; (*c) < 4; (*c)++) {
            matriz[(*l)][(*c)] = rand() % 10 + 1;
        }
    }
}

void funcaoDois(int matrizResultado[4][4], int matrizUm[4][4], int matrizDois[4][4]) {

    for (int l = 0; l < 4; l++) {
        for (int c = 0; c < 4; c++) {
            matrizResultado[l][c] = matrizUm[l][c] + matrizDois[l][c];
        }
    }
    
}

void funcaoTres(int matriz[4][4], int *l, int *c) {
    for ((*l) = 0; (*l) < 4; (*l)++) {
        for ((*c) = 0; (*c) < 4; (*c)++) {
            printf("%d ", matriz[(*l)][(*c)]);
        }
        printf("\n");
    }
}

int main() {
    int l, c;
    int matrizUm[4][4], matrizDois[4][4], matrizTres[4][4];

    funcaoUm(matrizUm, &l, &c);
    funcaoUm(matrizDois, &l, &c);
    
    funcaoDois(matrizTres, matrizUm, matrizDois);
    
    funcaoTres(matrizUm, &l, &c);
    printf("\n");
    funcaoTres(matrizDois, &l, &c);
    printf("\n");
    funcaoTres(matrizTres, &l, &c);

    return 0;
}
