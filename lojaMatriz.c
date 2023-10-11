#include <stdio.h>
#include <stdlib.h>
#include <time.h>

	int main() {
		
		int x, y, soma = 0;
		int matriz[x][y];
		
		for (x = 0; x < 3; x++) {
			
			for (y = 0; y < 6; y++) {
				
				matriz[x][y] = 1000 + 500 * (x + y);
				
				printf("R$: %d ", matriz[x][y]);
				
			}
			
			printf("\n");
			
		}
		
		for (x = 0; x < 3; x++) {
			
			for (y = 0; y < 6; y++) {
				
				soma += matriz[x][y];
				
			}
			
			printf("Loja %d: R$ %d\n", x + 1, soma);
			soma = 0;
			
		}
		
		for (y = 0; y < 6; y++) {
			
			if (matriz[0][y] > 2000) {
				
				printf("Funcionario N. %d tem um salario maior que R$ 2000.\n", y + 1);
				
			}
			
		}
		
		for (y = 0; y < 6; y++) {
			
			soma += matriz[1][y];

		}
		
					printf("Media salarial da loja 2: R$ %d", soma / 6);
		
		return 0;
		
	}
