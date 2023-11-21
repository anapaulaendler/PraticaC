#include <stdio.h>

int pos(int *a) {

    if ( *a >= 0 ) {
        *a = *a;
        } else {
        *a = *a * (-1);
        }
        return *a;
        }

int main() {
    
        int a;
        
        scanf("%d", &a);
        
        a = pos(&a);
        
        printf("%d", a);
        
        return 0;
}