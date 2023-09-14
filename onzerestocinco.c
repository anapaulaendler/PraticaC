    #include <stdio.h>

    int main() {

        int contador = 1, i = 1000;

        while (contador <= 5) {
            if (i % 11 == 5) {
                contador++;
            }
            i++;
        } printf("%d", i);

        return 0;

    }