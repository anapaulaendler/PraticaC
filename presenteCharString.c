#include <stdio.h>
#include <string.h>


int main()
{

    char palavra[201], especial;
    int i = 0, x = 0, cont = 0, p = 0;
    
    scanf("%s", palavra);
    scanf(" %c", &especial);
    
    x = strlen(palavra);
    
        for(i = 0; i <= x; i++) {
        
        if (palavra[i] == especial) {
            
            cont = i;
            
            printf("o caractere esta localizado em: %d", cont + 1);
            
            p = 1;
            
        }
        
    }
    
    if (p == 0) {
        
        printf("o caractere nao se apresenta no string.");

    }
    
    return 0;
    
}
