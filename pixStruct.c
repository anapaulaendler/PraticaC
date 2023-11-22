#include<stdio.h>
#include <string.h>

typedef struct {
    char chave[50];
    float valor;
    } pix;

int main(){
    
    float saldo = 0;
    int lixo;
    pix p[5];
    
    printf("digite seu saldo: ");
    scanf("%f", &saldo);
    
    for(int i = 0; i < 5; i++) {
    
    fflush(stdin);
    lixo = getchar();
        
        printf("digite a chave e depois o valor: ");
        scanf("%[^\n]s", p[i].chave);
        scanf("%f", &p[i].valor);
        
        if ((saldo - p[i].valor) >= 0) {
            saldo -= p[i].valor;
            printf("%.2f\n", saldo);
            } else {
            break;
            }
            
            }
            
            printf("saldo final: R$ %.2f", saldo);
        
    return 0;
}