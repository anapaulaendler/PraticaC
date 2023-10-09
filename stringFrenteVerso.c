#include <stdio.h>
#include <string.h>


int main()
{
    char str[100];
    int x = 0, i = 0;
    
    scanf("%s", str);
    
    x = strlen(str);
    
    for(i = x - 1; i >= 0; i--) {
        
        printf("%c", str[i]);
        
    }

    return 0;
    
}
