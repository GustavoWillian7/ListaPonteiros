#include <stdio.h>

int main(void) {
	int x;
	int y;
	
	printf("Informe o primeiro inteiro: ");
	scanf("%i", &x);
	printf("\nInforme o segundo inteiro: ");
	scanf("%i", &y);
	
	if (&x > &y) {
	    printf("\nO maior endereço é o da primeira variável, que é: %i", &x);
	} else {
    printf("\nO maior endereço é o da segunda variável, que é: %i", &y);
	}
	return 0;
}



