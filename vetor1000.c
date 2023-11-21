#include <stdio.h>
#include <stdlib.h>

void sim(int vetor[], int size, float* um, float* dois, float* tres, float* quatro, float* cinco, float* seis) {

    for (int i = 0; i < size; i++) {
        vetor[i] = rand() % 6 + 1;

        switch (vetor[i]) {
            case 1: (*um)++; break;
            case 2: (*dois)++; break;
            case 3: (*tres)++; break;
            case 4: (*quatro)++; break;
            case 5: (*cinco)++; break;
            case 6: (*seis)++; break;
        }
    }
}

int main() {
    int vetor[1000];

    float um = 0, dois = 0, tres = 0, quatro = 0, cinco = 0, seis = 0;

    sim(vetor, 1000, &um, &dois, &tres, &quatro, &cinco, &seis);

    printf("um: %.2f\ndois: %.2f\ntres: %.2f\nquatro: %.2f\ncinco: %.2f\nseis: %.2f\n", um / 10, dois / 10, tres / 10, quatro / 10, cinco / 10, seis / 10);

    return 0;
}
