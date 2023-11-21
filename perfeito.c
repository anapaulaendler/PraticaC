#include <stdio.h>

int perfeito(int num) {

        int perfeito = 0;

        for (int i  = 1; i < num; i++) {
            
            if (num % i == 0)  {
            perfeito += i;
            }
            
            }
            
            return perfeito;

}

int main() {

        int num, soma;
        
        scanf("%d", &num);
        
        soma = perfeito(num);
        
        if (soma == num) {
        
            printf("%d e perfeito!\n", num);
            
            } else {
            
            printf("%d nao e perfeito!\n", num);
            
            }
            
        return 0;
        
}