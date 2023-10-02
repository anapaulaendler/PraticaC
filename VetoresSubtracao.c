#include <stdio.h>

int main()
{
    float vetX[4], vetY[4], vetZ[4];
    int i = 0;
    
    
    for (i = 0; i < 4; i++) {
        
        scanf("%f %f", &vetX[i], &vetY[i]);
        
        vetZ[i] = vetX[i] - vetY[i];
        
    }
    
    for (i = 0; i < 4; i++) {
        
        printf("%.2f \n", vetZ[i]);
        
    }

    return 0;
}
