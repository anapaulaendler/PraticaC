#include <stdio.h>

int main()
{
    int matriz[5][5], x = 0, l = 0, c = 0;
    
    for (l = 0; l < 5; l++) {
        
        for (c = 0; c < 5; c++) {
            
            scanf("%d", &matriz[l][c]);
            
        }
        
    }
    
    scanf("%d", &x);
    
    for (l = 0; l < 5; l++) {
        
        for (c = 0; c < 5; c++) {
            
            if (matriz[l][c] % x == 0) {
                
                printf("%d e multiplo de %d\n", matriz[l][c], x);
                
            }
            
        }
        
    }

    return 0;
}
