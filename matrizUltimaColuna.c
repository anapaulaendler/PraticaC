#include <stdio.h>
#include <stdlib.h>
#include <time.h>

	int main() {
		
		int x = 0, y = 0, soma = 0;
		int matriz[x][y];

			for (x = 0; x < 3; x++) {
				
				for (y = 0; y < 5; y++) {
					
					srand(time(NULL));
					matriz[x][y] = rand() % 101;
					
					printf("%d ", matriz [x][y]);
					
				}
				
				printf("\n");
				
			}
			
			
			for (x = 0; x < 3; x++) {
				
				soma += matriz[x][4];
				
			}
			
			printf("%d", soma);
		
		return 0;
		
	}
