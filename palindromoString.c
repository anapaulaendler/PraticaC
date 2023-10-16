#include <stdio.h>
#include <string.h>

int main()
{
    
    char vetor[101];
    int i = 0, x = 0, sera = 1;
    
    fgets(vetor, 101, stdin);
    
    x = strlen(vetor);
    
    for (i = 0; i < (x / 2); i++) {
        
        if (vetor[i] != (vetor[x - i - 2])) {
            
            printf("nao\n");
            sera = 0;
            break;
            
        }
        
    }
    
    if (sera == 1) {
        
        printf("e!\n");
        
    }
    
    return 0;
    
}
