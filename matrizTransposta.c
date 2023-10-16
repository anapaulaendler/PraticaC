#include <stdio.h>
#include <stdlib.h>

int main()
{
    
    int matriz[4][4], transposta[4][4], l = 0, c = 0;
    
    for (l = 0; l < 4; l++) {
        
        for (c = 0; c < 4; c++) {
            
            matriz[l][c] = rand() % 101;
            transposta[c][l] = matriz[l][c];
            
            printf("%d ", matriz[l][c]);
            
        }
       
       printf("\n");
        
    }
    
    printf("\n");
    
    for (l = 0; l < 4; l++) {
        
        for (c = 0; c < 4; c++) {
            
            
            printf("%d ", matriz[c][l]);
            
        }
       
       printf("\n");
        
    }
    
    return 0;
    
}
