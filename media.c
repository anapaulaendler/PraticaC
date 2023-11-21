#include<stdio.h>

int ponderada(float um, float dois, float tres) {
    
    float media = ((2 * um) + (3 * dois) + (5 * tres)) / 10;
    
    return media;
    
}

int main() {

        float um, dois, tres, media;
        
        scanf("%f %f %f", &um, &dois, &tres);
        
        media = ponderada(um, dois, tres);
        
        printf("%f\n", media);
    
        return 0;
}