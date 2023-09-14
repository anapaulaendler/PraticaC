    #include <stdio.h>

    int main() {

        int valort, nrec, cont, vrec, soma, diferenca;

        printf("informe o valor total: ");
        scanf("%d", &valort);

        printf("informe a quantidade de recibos: ");
        scanf("%d", &nrec);

        for (cont = 1; cont <= nrec; cont++) {
            printf("informe o valor do recibo n. %d: ", cont);
            scanf("%d", vrec);
            soma += vrec;
        }
        diferenca = valort - soma;
        if (soma == valort) {
            printf("VALOR OK. ");
        } else if (diferenca > 0) {
            printf("diferenca positiva. ");
        } else if (diferenca < 0) {
            printf("diferenca negativa. ");
        }
        
        return 0;

    }