#include <stdio.h>

int main()
{
    int vetor[6], i = 0, menorV = 21, maiorV = 0, x = 0, soma = 0;
    
    while (i < 6) {
        
        scanf("%d", &x);
        
        if ((x >= 1) && (x <= 20) && (x % 2 == 0)) {
            
            vetor[i] = x;
            soma += vetor[i];
            
            if (vetor[i] > maiorV) {
                maiorV = vetor[i];
            } 
            
            if (vetor[i] < menorV) {
                menorV = vetor[i];
            }
            
            i++;
            
        }
        
    }
