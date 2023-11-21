#include<stdio.h>

    int x, y, z = 1;
    
    void elevado() {
        
        int i = 0;
        
        for (i = 0; i < y; i++) {
            
            z = z * x;
            }
            
            }

    int main() {
    
        scanf("%d %d", &x, &y);
        
        elevado();
        
        printf("%d", z);
    
    }