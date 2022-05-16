#include <stdio.h>

int main(void) {
	int x = 1;
	int y = 2;
	
	if (&x > &y) {
	    printf("O maior endereço é o da primeira variável, que é: %i", &x);
	} else {
    printf("O maior endereço é o da segunda variável, que é: %i", &y);
	}
	return 0;
}

