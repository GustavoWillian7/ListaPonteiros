#include <stdio.h>

int dobro(int *x, int *y, int *soma) {
    *x =*x + *x;
    *y = *y + *y;
    *soma = *x + *y;
}

int main(void) {
	int x, y, soma;
	printf("Informe um valor inteiro: ");
	scanf("%i", &x);
	printf("\nInforme outro valor inteiro: ");
	scanf("%i", &y);

    dobro(&x, &y, &soma);
    printf("\nA soma do dobro dos números informados é: %i", soma);
	
	return 0;
}
