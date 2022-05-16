#include <stdio.h>

int comparar(int *x, int *y) {
    int aux = 0;
    if (*y > *x) {
        aux = *y;
        *y = *x;
        *x = aux;
    }
}

int main(void) {
	int x, y;
	printf("Informe um valor inteiro: ");
	scanf("%i", &x);
	printf("\nInforme outro valor inteiro: ");
	scanf("%i", &y);

    comparar(&x, &y);
    printf("\nO maior valor é: %i", x);
    printf("\nO menor valor é: %i", y);
	
	return 0;
}
