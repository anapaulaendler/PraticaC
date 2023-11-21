#include <stdio.h>

int ler() {

    int v;
    scanf("%d", &v);
    return v;
    
    }

int soma(int a, int b, int *r) {

    *r = a + b;
    
    return *r;
    
}
int main() {
    
    int a = ler();
    int b = ler();
    int r;
    
    soma(a, b, &r);
    
    printf("%d", r);
    return 0;
}