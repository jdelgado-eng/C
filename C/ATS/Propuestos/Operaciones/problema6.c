/* Calcular la media aritmética de 3 números cualesquiera */

#include <stdio.h>

int main(){
    int x1, x2, x3, media_aritmetica;

    printf("Digite los tres números: \n"); scanf("%i %i %i", &x1,&x2,&x3);
    media_aritmetica = (x1 + x2 + x3)/3;
    printf("La media aritmética es de %i\n", media_aritmetica);

    return 0;
}
