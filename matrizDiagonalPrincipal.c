#include <stdio.h>
#include <stdlib.h>
#include <time.h>

	int main() {
		
		int x, y, mult = 1;
		int matriz[x][y];
		
		for (x = 0; x < 4; x++) {
			
			for (y = 0; y < 4; y++){
				
				matriz[x][y] = 1 + y + x;
				
				printf("%d ", matriz[x][y]);
				
			}
			
			printf("\n");
			
		}
		
		for (x = 0; x < 4; x++) {
			
			for (y = 0; y < 4; y++) {
				
				if (x == y) {
					
					mult = mult * matriz[x][y];
					
				}
				
			}
			
		}
		
		printf("%d", mult);
		
		return 0;
		
	}
