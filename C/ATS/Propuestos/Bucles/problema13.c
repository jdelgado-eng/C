// Hacer un programa que imprima la suma de todos los números pares que hay desde 1 hasta n, y diga cuantos números hay.

#include <stdio.h>

int main(){

    int num, i, suma=0;

    printf("¿Hasta que número desea hacer la suma de pares?: "); scanf("%i", &num); //ejem:10

    for(i=0; i<=num; i+=2){ // 0 2 4 6 8 10

        suma+=i; // 0 2 6 12 20 30

    }
    printf("%i\n",suma);

    return 0;
}
