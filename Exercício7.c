#include<stdio.h>

int soma (int *x, int y) {
    *x = *x + y;
}

int main()
{
    int x, y;
    printf("Informe um valor inteiro: ");
    scanf("%i",&x);
    printf("\nInforme outro valor inteiro: ");
    scanf("%i",&y);
    
    soma(&x, y);
    printf("\nPrimeiro valor: %i", x);
    printf("\nSegundo valor: %i", y);
    
    return 0;
}
