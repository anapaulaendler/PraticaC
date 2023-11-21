#include<stdio.h>

    int a;
    
    void divisivel() {
    
        if (a % 2 == 0 || a % 3 == 0) {
        
            printf("Divisivel por 2 ou 3!\n");
            
            } else {
            printf("Valor invalido!\n");
            }
            
            }

int main()
{
    
    scanf("%d", &a);
    divisivel();
    
    return 0;
    
}