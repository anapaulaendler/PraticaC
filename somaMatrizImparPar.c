#include <stdio.h>
#include <stdlib.h>

int main()
{
    
    int matriz[10][15], l = 0, c = 0, soma = 0;
    
    for (l = 0; l < 10; l++) {
        
        for (c = 0; c < 15; c++) {
            
            matriz[l][c] = rand() % 101;
            soma += matriz[l][c];
            
        }
        
        if (soma % 2 == 0) {
            
            printf("a soma dos elementos da linha %d e de %d, e isso e par!\n", l + 1, soma);
            
        } else {
            
            printf("a soma dos elementos da linha %d e de %d, e isso e impar!\n", l + 1, soma);
            
        }
        
        soma = 0;
        
    }
    
    printf("\n");
    
    for (l = 0; l < 15; l++) {
        
        for (c = 0; c < 10; c++) {
            
            matriz[c][l] = rand() % 101;
            soma += matriz[c][l];
            
        }
        
        if (soma % 2 == 0) {
            
            printf("a soma dos elementos da coluna %d e de %d, e isso e par!\n", l + 1, soma);
            
        } else {
            
            printf("a soma dos elementos da coluna %d e de %d, e isso e impar!\n", l + 1, soma);
            
        }
        
        soma = 0;
        
    }
    
    return 0;
    
}
