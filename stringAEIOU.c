#include <stdio.h>
#include <string.h>


int main()
{

    char palavra[201];
    int i = 0, x = 0, cont = 0;
    
    scanf("%s", palavra);
    
    x = strlen(palavra);
    
    for(i = x; i >= 0; i--) {
        
        switch (palavra[i]) {
            case 'a' : cont++;
            break;
            case 'e' : cont++;
            break;
            case 'i' : cont++;
            break;
            case 'o' : cont++;
            break;
            case 'u' : cont++;
            break;
        }
        
    }
    
    printf("%d", cont);

    return 0;
    
}
