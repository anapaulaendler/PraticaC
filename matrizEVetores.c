#include <stdio.h>
#include <stdlib.h>
#include <time.h>

	int main() {
		
		int x, y, z = 0, a, somat = 0, multi = 1;
		int matriz[x][y];
		int soma[3], mult[4];
		
		for (x = 0; x < 3; x++) {
			
			for (y = 0; y < 4; y++){
				
				matriz[x][y] = 1 + y + x;
				
				printf("%d ", matriz[x][y]);
				
			}
			
			printf("\n");
			
		}
		
			for (x = 0; x < 3; x++) {
				
				for (y = 0; y < 4; y++) {
					
					somat += matriz[x][y];
					
				}
				
				soma[x] = somat;
				
				printf("%d ", soma[x]);
				
				somat = 0;
				
			}

			printf("\n");

			for (y = 0; y < 4; y++) {
				
				for (x = 0; x < 3; x++) {
					
					multi = multi * matriz[x][y];
					
				}
				
				mult[y] = multi;
				
				printf("%d ", mult[y]);
				
				multi = 1;
				
			}
			
		return 0;
		
	}
