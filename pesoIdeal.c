#include<stdio.h>

    int pesoIdeal(float altura) {
    
        char sexo;
        float ideal = 0;
        
        printf("qual seu sexo? ");
        scanf(" %c", &sexo);
        
        if (sexo == 'm' || sexo == 'M')  {
        
        ideal = (72.7 * altura) - 58;
        
        } else if (sexo == 'f' || sexo == 'F') {
        
        ideal = (62.1 * altura) - 44.7;
        
        }
    
        return ideal;
    
    }

    int main() {

        float peso = 0, altura = 0, ideal = 0;
        
        printf("respectivamente, qual seu peso e qual sua altura? ");
        scanf("%f %f", &peso, &altura);
        
        ideal = pesoIdeal(altura);
        
        if (ideal > peso) {
        printf("abaixo do peso\n");
       } else if (peso > ideal) {
       printf("acima do peso\n");
       }
        return 0;
    
    }