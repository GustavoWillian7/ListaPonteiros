#include <stdio.h>
#include <stdlib.h>

int main (void){
    int vet[5], i;
    int *fimVet;
    fimVet = vet;
 
    printf("Digite %d elementos:\n",5);
 
    for(i = 0; i < 5; i++){
        scanf("%d", &vet[i]);
    }
 
    printf("Elementos do Array:\n");
        for(i = 0; i < 5; i++){
            printf("%d ",vet[i]);
        }
    printf("\nEndereços dos elementos pares: ");
 
    fimVet = vet;
 
    for(i = 0; i < 5; i++){
        if(vet[i] %2 == 0){
            printf("\nNumero %d é par. Posicao = %d",vet[i], fimVet);
    }
    fimVet++;
  }
}
