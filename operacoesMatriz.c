#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matriz[4][4], soma = 0, l = 0, c = 0;
    
    for (l = 0; l < 4; l++) {
        
        for (c = 0; c < 4; c++) {
            
            matriz[l][c] = rand() % 11;
            
            printf("%d ", matriz[l][c]);
            
        }
        
        printf("\n");
        
    }

    for (l = 0; l < 4; l++) {
        
        soma += matriz[l][0] * matriz[l][0];
        
    }
    
    printf("%d\n", soma);
    soma = 0;
    
    for (c = 0; c < 4; c++) {
        
        soma += matriz[2][c];
        
    }
    
    printf("%d\n", soma);
    soma = 0;
    
    for (l = 0; l < 4; l++) {
        
        for (c = 0; c < 4; c++) {
            
            if (l == c) {
                
                soma += matriz[l][c];
                
            }
            
        }
        
    }
    
    printf("%d\n", soma);
    soma = 0;
    
    for(c = 0; c < 4; c += 2) {
        
        soma += matriz[1][c];
        
    }
    
    printf("%d\n", soma);
    soma = 0;

    return 0;
}
