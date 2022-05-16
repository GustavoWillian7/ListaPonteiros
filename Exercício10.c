#include <stdio.h>
#include <stdlib.h>

int main() {
	int vetor[5];
	int *p = vetor;
	int i;
	
	for (i=0; i<5; i++) {
		printf("Digite o valor para a posicao %d: \n", (i+1));
		scanf("%d", (p+i));
	}
	
	printf("\n");
	
	for (i=0; i<5; i++) 
		printf("Posição %d: %d\n", (i+1), *(p+i));
	
	return 0;
}
