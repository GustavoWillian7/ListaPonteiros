#include <stdio.h>

int troca(int *x, int *y) {
    int aux;
    aux = *x;
    *x = *y;
    *y = aux;
}

int main(void) {
	int x, y;
	printf("Informe um valor inteiro: ");
	scanf("%i", &x);
	printf("\nInforme outro valor inteiro: ");
	scanf("%i", &y);
	
	troca(&x, &y);
	printf("\nA primeira variável agora tem o valor de: %i", x);
	printf("\nA segunda variável agora tem o valor de: %i", y);
	
	return 0;
}
