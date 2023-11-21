#include<stdio.h>

    int leitor() {
    
        int a = 0;
        
        scanf("%d", &a);
    
       return a;
       
       
    }
    
    int valor(int b, int c, int d) {
    
        int maior = b;
        
        if (c > maior) {
        
        maior = c;
        
        }
        
        if (d > maior) {
        
        maior = d;
        
        }
    
        return maior;
    
    }

    int main() {

        int  b, c, d, maior;
        
        b = leitor();
        c = leitor();
        d = leitor();
        
        maior = valor(b, c, d);
        
        printf("o maior e: %d", maior);
    
        return 0;
        
}