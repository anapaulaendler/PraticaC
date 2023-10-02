#include <stdio.h>

int main()
{
    float vetX[6] = {1, 2, 3, 4, 5, 6};
    int i = 0;
    
    for(i = 0; i < 6; i++) {
        
        if (i % 2 != 0) {
            
            printf("%.0f\n", vetX[i]);
            
        }
        
    }
    
    

    return 0;
}
