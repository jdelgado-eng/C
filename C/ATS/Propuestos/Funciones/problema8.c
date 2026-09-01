//Hacer un programa que muestre 3 números ordenados descendentemente, utilizar un procedimiento.

#include <stdio.h>

void descendente(int a, int b, int c);

int main(){

    int A, B, C;

    printf("Digite tres números: \n"); scanf("%i %i %i", &A, &B, &C);

    descendente(A,B,C);

    return 0;
}

void descendente(int a, int b, int c){

    if (a<=b && a<=c){
        if (b<=c){
            printf("%i %i %i\n", c,b,a);
        } else {
            printf("%i %i %i\n", b,c,a);
        }
    }
    if (b<=a && b<=c){
        if (a<=c){
            printf("%i %i %i\n", c,a,b);
        } else {
            printf("%i %i %i\n", a,c,b);
        }
    }
    if (c<=a && c<=b){
        if (a<=b){
            printf("%i %i %i\n", b,a,c);
        } else {
            printf("%i %i %i\n", a,b,c);
        }
    }

}
