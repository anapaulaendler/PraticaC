#include <stdio.h>

    int conversao( float celsius) {
    
        celsius = (1.4 * celsius) + 32;
        
        return celsius;
        
        }

int main() {
    
        float celsius, fah;
        
        scanf("%f", &celsius);
    
        fah = conversao(celsius);
        
       printf("%.2f", fah); 
    
        return 0;
        
}