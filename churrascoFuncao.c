#include<stdio.h>

    int ler() {
    int x;
    scanf("%d", &x);
    return x;
    }
    
    void preco(int vetor[], int quant) {
    
    for (int i = 0; i < quant; i++) {
    printf("qual o preco do item %d? ", i + 1);
    scanf("%d", &vetor[i]);
    }
    
    }
    
    int pagam(int item, int q, int precoItem[], int *n, int *crianca) {
    
    float precoTotal = 0, precoI = 0;
    
    for (int i = 0; i < item; i++) {
    precoTotal += (q / 1000) * precoItem[i] ;
    }
    
    precoI = precoTotal / ((*n) - 0.5 * (*crianca));
    
    return precoI;
    
    }

int main()
{
    int n = 0, crianca = 0, itemC, itemB;
    
    printf("quantas pessoas terao?\n");
    scanf("%d", &n);
    
    printf("quantas dessas tem entre 3 a 12 anos?\n");
    scanf("%d", &crianca);
    
    printf("quantos itens de carne?\n");
    itemC = ler();
    
    int pItemC[itemC];
    preco(pItemC, itemC);
    
    printf("quantos itens de bebida?\n");
    itemB = ler();
    
    int pItemB[itemB];
    preco(pItemB, itemB);
  
    int qC = 0, qB = 0;
    
    qC = ((n - crianca) * 250) + (crianca * 125) / itemC;
    qB = ((n - crianca) * 700) + (crianca * 350) / itemB;
    
    float precoC = 0, precoB = 0;
    
    precoC = pagam(itemC, qC, pItemC, &n, &crianca);
    
    precoB = pagam(itemB, qB, pItemB, &n, &crianca);
    
    printf("preco adulto: R$ %.2f\npreco crianca: R$ %.2f\n", precoC + precoB, (precoC + precoB) / 2);
    printf("quantidade por item de carne: %d g\nquantidade por item de bebida: %d ml\n", qC, qB);
    
    return 0;
}