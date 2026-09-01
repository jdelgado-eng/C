/*  */

#include <stdio.h>
#include <math.h>

int main(){

    int num;
    float rq;
    printf("Ingrese un número: "); scanf("%i", &num);

    rq = sqrt(num);

    if (num < 0){
        printf("Tiene raíz imaginaria \n");
    }else{
        printf("La raíz cuadrada es: %.2f\n", rq);
    }

    return 0;
}
