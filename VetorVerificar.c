#include <stdio.h>

int main()
{
    int i = 0, vetor[8], x = 0, num = 0;
    
    while (i < 8) {
        
        scanf("%d", &x);
        
        if(x >= 0) {
            vetor[i] = x;
            i++;
        }
    }
    
    printf("digite seu valor: ");
    scanf("%d", &num);
    
    for (i = 0; i < 8; i++) {
        if (vetor[i] == num) {
            printf("%d esta contido no vetor.", num);
        }
    }

    return 0;
}
