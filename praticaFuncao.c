#include <stdio.h>

int ler() {
    
    int num;
    
    do {
        
        scanf("%d", &num);
        
    } while (num < 0 );
    
    return num;
    
}

void mostra(int a, int b) {
    
    int i = 0;
    
    if (a > b) {

        for (i = b; i <= a; i++) {

            printf("%d ", i);
            
        }
        
    } else if (b > a) {

        for (i = a; i <= b; i++) {

            printf("%d ", i);
            
        }
        
    } else {
        
        printf("codigo invalido! ");
        
    }
    
}

int main() {

    int a = 0, b = 0;
    char opcao;
    
    do {
        
    a = ler();
    b = ler();
    
    mostra(a, b);
    
    printf("\ndeseja continuar? s/n: ");
    scanf(" %c", &opcao);
    
    } while (opcao == 's' || opcao == 'S');

    return 0;
    
}
