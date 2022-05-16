#include <stdio.h>
#include <stdlib.h>

int main (void){
    float vet[10];
    int i, *ptvet;
    ptvet = vet;
 
    printf("Endereços de cada elemento do Array: \n");
 
    for(i = 0; i < 10; i++){
        printf("%i : %i\n",i+1, ptvet++);
    } 
 
return 0;
}
