    #include <stdio.h>

    int main() {

        int a, cont = 0;
        
        do {
            printf("qual o seu valor? digite zero para abortar! ");
            scanf("%d", &a);

            if ((a >= 100) && (a <= 200)) {
                cont++;
                printf("%d esta dentro do intervalo! ate agora sao %d numeros dentro dele! \n", a, cont);
            }
        } while (a != 0);

        return 0;

    }