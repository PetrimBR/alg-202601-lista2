#include <stdio.h>
#include <stdlib.h>

int main() {
	int i, j, soma = 0;

	printf("Pecas do domino com o numero 4:\n");
	
	for (i = 0; i <= 6; i++) {
	    for (j = i; j <= 6; j++) {
	        if (i == 4 || j == 4) {
	            printf("  [%d|%d] = %d\n", i, j, i + j);
	            soma = soma + i + j;
	        }
	    }
	}
	
	printf("Soma total dos 4s no domino: %d\n", soma);
	    
	system("pause");
	return 0;	
}
