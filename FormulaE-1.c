    #include <stdio.h>
    #include <math.h>

    int main() {

        int a, i;
        float h, po;

        scanf("%d", &a);
        
        for (i = 1; i <= a; i++) {
            po = (pow(i,-1));
            h += po;
        }

        printf("%f", h);

        return 0;

    }
