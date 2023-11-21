#include<stdio.h>

int calculo(int *codigo, int *quant, int *subp) {

    switch (*codigo) {
    
        case 1: *subp += 10 * (*quant); break;
        case 2: *subp += 12 * (*quant); break;
        case 3: *subp += 8 * (*quant); break;
        case 4: *subp += 14 * (*quant); break;
        default: printf("codigo invalido!\n"); break;
        
    }

    return *subp;
    
}

int main() {

    int codigo = 0, quant = 0, subp = 0;
    char continuar;

    do {
    
        printf("1: Bolo de chocolate\n2: Bolo de morango\n3: Cafe\n4: Tanque de guerra\n");
        scanf("%d", &codigo);

        printf("Quantidade: ");
        scanf("%d", &quant);

        calculo(&codigo, &quant, &subp);
        printf("R$: %d\n", subp);

        printf("Deseja continuar? (s/n): ");
        scanf(" %c", &continuar);

    } while (continuar == 'S' || continuar == 's');

    printf("Total: R$ %d", subp);

    return 0;
}
