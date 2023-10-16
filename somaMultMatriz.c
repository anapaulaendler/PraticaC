#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matriz[3][4], l = 0, c = 0, soma[3], mult[4];
    
    for (l = 0; l < 3; l++) {
        
        for (c = 0; c < 4; c++) {
            
            matriz[l][c] = rand() % 101;
            soma[l] += matriz[l][c];
            
            printf("%d ", matriz[l][c]);
            
        }
        
        printf("\n");
        
    }
    
    printf("soma das linhas: ");
    
    for(l = 0; l < 3; l++) {
        
        printf("%d ", soma[l]);
        
    }
    
        printf("\n");
    
    for (c = 0; c < 4; c++) {
        
        mult[c] = 1;
        
        for(l = 0; l < 3; l++) {
            
            mult[c] *= matriz[l][c];
            
        }
        
    }
    
    printf("multiplicacao das colunas: ");
    
    for(c = 0; c < 4; c++) {
        
        printf("%d ", mult[c]);
        
    }

    return 0;
}
