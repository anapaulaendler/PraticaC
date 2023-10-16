#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor[1000], x = 0, num = 0;
    
    for (x = 0; x < 1000; x++) {
        
        vetor[x] = rand() % 101;
        
    }
    
    scanf("%d", &num);
    
    for (x = 0; x < 1000; x++) {
        
        if (vetor[x] == num) {
            
            printf("o numero %d esta contido dentro do vetor na posicao %d.\n", num, x + 1);
            
        }
        
    }
    

    return 0;
    
}
