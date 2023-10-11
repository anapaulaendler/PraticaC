
	#include <stdio.h>
	
		int main() {
			
			int x = 0, y = 0;
			int tabuada[x][y];
			
			for (x = 0; x < 11; x++) {
				
				for(y = 0; y < 11; y ++) {
					
					tabuada[x][y] = x * y;
					printf("%d ", tabuada[x][y]);
					
				}
				
				printf("\n");
				
			}
			
			return 0;
			
		}
