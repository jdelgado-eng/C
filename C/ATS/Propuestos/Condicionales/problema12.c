/*  */

#include <stdio.h>
#define turismo 500
#define autobus 3000
#define motocicleta 300

int main(){

    int tipoVehiculo, numPersonas, precio;

    printf("Seleccione el tipo de vehículo [1-2-3]: "); scanf("%i", &tipoVehiculo);

    switch (tipoVehiculo){

        case 1: printf("\nHa elegido turismo");
            printf("\nDigite el número de personas: "); scanf("%i", &numPersonas);
            precio = turismo * numPersonas;
            printf("El precio total es de $%i\n", precio);
        break;

        case 2: printf("\nHa elegido autobus");
            printf("\nDigite el número de personas: "); scanf("%i", &numPersonas);
            precio = autobus * numPersonas;
            printf("El precio total es de $%i\n", precio);
        break;

        case 3: printf("\nHa elegido motocicleta");
            printf("\nDigite el número de personas: "); scanf("%i", &numPersonas);
            precio = motocicleta * numPersonas;
            printf("El precio total es de $%i\n", precio);
        break;

        default: printf("\n No es una opción");

    }

    return 0;
}

