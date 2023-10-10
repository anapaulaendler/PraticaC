#include <stdio.h>
#include <string.h>

int main()
{

    int vetor[9], i = 0, temp = 0, valor = 0, cont = 0;
    
    for (i = 0; i < 9; i++) {
        
        scanf("%d", &vetor[i]);
        
    } 
    
    for (i = 0; i < 9; i++) {
        
        printf("%d  ", vetor[i]);
        
    } 
    
    printf("\n");
    
    temp = vetor[8];
    
    for (i = 0; i < 9; i++) {
            
            vetor[i] = vetor[i + 1];
        
    } 
    
    vetor[0] = temp;
    
    for (i = 0; i < 9; i++) {
        
        printf("%d  ", vetor[i]);
        
    } 
    
    printf("\n");
    
    for (i = 0; i < 9; i++) {
        
        vetor[i] += i;
        
    }
    
    for (i = 0; i < 9; i++) {
        
        printf("%d  ", vetor[i]);
        
    } 
    
    printf("\n");
    
    scanf("%d", &valor);
    
    for (i = 0; i < 9; i++) {
        if (vetor[i] == valor) {
            cont++;
        }
    }
    
    printf("%d", cont);
    
    return 0;
    
}
