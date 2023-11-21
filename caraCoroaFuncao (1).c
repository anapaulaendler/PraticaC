#include<stdio.h>
#include<stdlib.h>

int definir() {
    int n = rand() % 2;
    return n;
    }

void porcentagem(int *n, float (*cara), float (*coroa)) {

        int x;

       scanf("%d", &(*n));
       
        for (int i = 0; i < (*n); i++) {
        x = definir();
        
       switch (x) {
            case 0 : (*cara)++; break;
            case 1 : (*coroa)++; break;
        }
        
        }
        
        }
        
int main() {
    int n;
    float cara = 0, coroa = 0;
    
    porcentagem(&n, &cara, &coroa);
    
    printf("%.2f %.2f", (cara * 100) / n, (coroa * 100) / n);
    return 0;
}