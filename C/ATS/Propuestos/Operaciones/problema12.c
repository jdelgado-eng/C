/* 12. Hacer un programa que obtenga la media geométrica de tres números */

#include <stdio.h>
#include <math.h>

int main (){

    float n1,n2,n3, media_geo;

    printf("Digite los tres números necesarios: \n"); scanf("%f %f %f", &n1,&n2,&n3);

    media_geo = cbrt(n1*n2*n3);
    printf("La media geométrica es: %.2f\n", media_geo);

    return 0;
}

