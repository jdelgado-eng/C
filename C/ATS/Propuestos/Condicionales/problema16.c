/*  */

#include <stdio.h>
#include <math.h>

int main(){

    int opcion, numero;

    printf("--------------------------------\n");
    printf("¡Bienvenido al menú de opciones!");
    printf("\n-------------------------------");
    printf("\nSeleccione una de las dos alternativas (1 o 2 o 3): "); scanf("%i", &opcion);

    switch (opcion){

        case 1:
        printf("Ingrese el número a potenciar: "); scanf("%i", &numero);
        numero = pow(numero,3);
        printf("\nEl cubo del número es %i", numero);
        break;

        case 2:
        printf("Ingrese el número: "); scanf("%i", &numero);
        if (numero % 2 == 0){
            printf("El número %i es par\n", numero);
        }else{
            printf("El número %i es impar\n", numero);
        }
        break;

        case 3: break;

        default: printf("Opción inválida");
    }

    return 0;
}
