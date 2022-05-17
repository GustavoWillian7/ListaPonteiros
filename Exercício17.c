#include <stdio.h>

void frac(float num, int *x, float *y) {
    *x = num;
	  *y = num - *x;
}

int main(void) {
	float num, fracc;
	int inteiro;
	
	printf("Digite um número real: ");
	scanf("%f", &num);
	
	frac(num, &inteiro, &fracc);
	
	printf("\nParte inteira: %i\nParte fracionada:  %f", inteiro, fracc);
	
	return 0;
}

