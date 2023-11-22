#include<stdio.h>

void depositar(float *saldo) {

float quantidade;
printf("informe qual valor gostaria de depositar: R$ ");
scanf("%f", &quantidade);
(*saldo) += quantidade;

}

void sacar(float *saldo) {

float quantidade;
printf("informe qual quantidade gostaria de sacar: R$ ");
scanf("%f", &quantidade);

if ((*saldo) >= quantidade) {
    (*saldo) -= quantidade;
    } else {
    printf("saldo insuficiente\n");
    }
    
    }
    
    void checar(float *saldo) {
    printf("R$ %.2f", (*saldo));
}

int main() {

   int x = 0;
   float saldo = 1000;
    
    do {
    
    printf("qual operacao gostaria de realizar? digite: \n");
    printf("1: depositar\n2: sacar\n3: checar saldo\n0: sair\n");
    
    scanf("%d", &x);
    
    switch (x) {
    case 1 : depositar(&saldo); break;
    case 2 : sacar(&saldo); break;
    case 3 : checar(&saldo); break;
    }
    
    } while (x != 0);
    
    return 0;
}