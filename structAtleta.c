#include<stdio.h>
#include <string.h>

typedef struct {
    char nome[50];
    float peso;
    float altura;
    float imc;
    } atleta;

int main() {
    
    atleta a[5];
    int lixo;
    
    for(int i = 0; i < 5; i++) {
    
        printf("nome, peso, altura\n");
        
        fflush(stdin);
        lixo = getchar();
        scanf("%[^\n]s", a[i].nome);
        scanf("%f", &a[i].peso);
        scanf("%f", &a[i].altura);
        a[i].imc = a[i].peso / (a[i].altura * a[i].altura);
        
        }
        
        for (int i = 0; i < 5; i++) {
            
            printf("nome: %s\npeso: %.2f kg\naltura: %.2f m\nimc: %.2f\n", a[i].nome, a[i].peso, a[i].altura, a[i].imc);
            
            }
        
    return 0;
}