#include <stdio.h>

int main()
{
    float vetX[6] = {1, 2, 3, 4, 5, 6};
    int i = 0;
    
    for(i = 5; i >= 0; i--) {
        
        printf("%.0f\n", vetX[i]);
        
    }

    return 0;
}
