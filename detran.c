#include <stdio.h>

    int main() {

        int carteira, nmultas, multas, i, soma, mmano, mmulta;

        do {
            printf("qual o numero da sua carteira? ");
            scanf("%d", &carteira);

            if ((carteira > 0) && (carteira < 4328)) {
            printf("quantas multas? ");
            scanf("%d", &nmultas);

            for(i = 1; i <= nmultas; i++){
            printf("preco da multa %d: ", i);
            scanf("%d", &multas);
            soma += multas;
            }
            if (nmultas > mmulta) {
                mmulta = nmultas;
                mmano = carteira;
            }
            } else {
                break;
            }
        } while (1);

        printf("a soma total dos valores e: %d. o numero da carteira do motorista com a soma mais cara e: %d. ", soma, mmano);

        return 0;

    }