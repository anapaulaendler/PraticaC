    #include <stdio.h>

    int main() {

        int contador, a, p = 0;

        do {
        scanf("%d", &a);

        for (contador = 2; contador < a; contador ++){
            if (a % contador == 0){
                printf("nao e primo! ");
                p = 1;
                break;
            }
        } if (p == 0) {
            printf("primo! ");
        }
        } while (a > 0);
        
        return 0;

    }
