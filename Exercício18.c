#include <stdlib.h> 
#include <math.h>

void calc_esfera(float r, float *area, float *volume) { 
    *area = 4 * r * r;
    *volume = 4 * (pow(r,3)) / 3;
    }

int main(void) {

    float r, area, volume;
    printf("Informe o raio: "); 
    scanf("%f", &r);

    calc_esfera(r, &area, &volume);                

    printf("\nÁrea =  %.2f \nVolume = %.2f", area, volume);
    
    return 0;
}
