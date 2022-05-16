#include <stdio.h>

int ordenar(int *x, int *y, int *z) {
    int aux = 0;
    if (*x != *y != *z) {
        if (*y > *x) {
            aux = *y;
            *y = *x;
            *x = aux;
        }
        if (*z > *y) {
            aux = *z;
            *z = *y;
            *y = *x;
            *x = aux;
        }
        return 0;
    } else {
        return 1;
    }
}

int main(void) {
	int x, y, z;
	printf("Informe um valor inteiro: ");
	scanf("%i", &x);
	printf("\nInforme outro valor inteiro: ");
	scanf("%i", &y);
	printf("\nInforme outro valor inteiro: ");
	scanf("%i", &z);

    ordenar(&x, &y, &z);
    printf("\nO maior valor é: %i", x);
    printf("\nO segundo maior valor é: %i", y);
    printf("\nO terceiro maior valor é: %i", z);
	
	return 0;
}
