#include <stdio.h>
#include <stdlib.h>

int main()
{
    
    int matriz[5][5], diagonal[5], l = 0, c = 0, soma = 0;
    
    for (l = 0; l < 5; l++) {
        
        for (c = 0; c < 5; c++) {
            
            matriz[l][c] = rand() % 101;
         
        if (l == c) {
            
            diagonal[l] = matriz[l][c];
            soma += diagonal[l];
            
        }
            
        }
        
    }
    
    printf("%d", soma);
    
    return 0;
    
}
