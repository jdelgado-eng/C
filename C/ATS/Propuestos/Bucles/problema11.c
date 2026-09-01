//11. Hacer un programa que calcule la suma de factoriales

#include <stdio.h>

int main()
{
    int i, j, canti, num, cont=1, facto=1, suma=0;

    printf("Ingrese la cantidad de números que quiere factorizar para su posterior suma: "); scanf("%i", &canti);

    for(i=1; i<=canti; i++){
        printf("Ingrese el número para hallar su factorial: "); scanf("%i", &num);
        facto=1;
        for(j=1; j<=num; j++){
            facto *= j;
        }
        suma += facto;
    }
    printf("La suma factorial de los %i números que proporcionaste son: %i\n", canti, suma);

    return 0;
}
