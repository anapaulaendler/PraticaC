#include <stdio.h>

int main()
{
    
    int vetor[10], x = 0, outro[10];
    
    for (x = 0; x < 10; x++) {
        
        scanf("%d", &vetor[x]);
        
    }
    
    for (x = 0; x < 10; x++) {
        
        if (vetor[x] % 2 == 0) {
            
            outro[x] = vetor[x] / 2;
            
        } else {
            
            outro[x] = vetor[x] * 3;
            
        }
        
    }
    
    for (x = 0; x < 10; x++) {
    
    printf("%d, %d\n", vetor[x], outro[x]);
    
    }

    return 0;
    
}
