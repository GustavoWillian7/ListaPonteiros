#include <stdio.h>

int main()
{
    int i = 10;
    int *ptint = &i;
    
    float r = 2.5;
    float *ptreal = &r;
    
    char c ='z';
    char  *ptchar = &c;
    
    printf("Inteiro antes da modificação = %i ", *ptint);
    printf("\nReal antes da modificação = %f",  *ptreal);
    printf("\nChar antes da modificação = %c", *ptchar);
    
   *ptint = 20;
   *ptreal = 5.5;
   *ptchar = 'a';

    printf("\nInteiro depois da modificação = %i ", *ptint);
    printf("\nReal depois da modificação = %f",  *ptreal);
    printf("\nChar depois da modificação = %c", *ptchar);

}
