#include <stdio.h>

int maiorVet (int tam, int vet[tam]) {
    int maior = vet[0], i;
    for (i = 1; i < tam; i++) {
        if (vet[i] > maior) {
            maior = vet[i];
        }
    }
    return maior;
}

int contaValorVet (int vet[], int teste, int tam) {
    int cont = 0, i;
    for (i = 1; i < tam; i++) {
        if (vet[i] == teste) {
            cont++;
        }
    }
    return cont;
}

void maiorQtdVet (int vet[], int tam, int *maior, int *cont) {
    *maior = maiorVet (tam, vet);
    *cont = contaValorVet (vet, *maior, tam);
}

int main(void) {
    int vet[5] = {1, 8, 8 , 0, 2}, maior, i, cont = 0;
    maiorQtdVet (vet, 5, &maior, &cont);
    
    printf("O maior valor é: %i e ele aparece %i vez(es).", maior, cont);
    
	return 0;
}

