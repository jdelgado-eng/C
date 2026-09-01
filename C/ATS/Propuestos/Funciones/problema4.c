//Hacer un programa que pida por pantalla un número del 1 al 10 y mediante un procedimiento muestre por pantalla el número escrito en letras.

#include <stdio.h>

void convercion();

int main(){

    convercion();

    return 0;
}

void convercion(){

    int numero;
    printf("Digite un número del 1 al 10: "); scanf("\n%i", &numero);

    switch (numero){
        case 1: printf("Uno\n"); break;
        case 2: printf("Dos\n"); break;
        case 3: printf("Tres\n"); break;
        case 4: printf("Cuatro\n"); break;
        case 5: printf("Cinco\n"); break;
        case 6: printf("Seis\n"); break;
        case 7: printf("Siete\n"); break;
        case 8: printf("Ocho\n"); break;
        case 9: printf("Nueve\n"); break;
        case 10: printf("Diez\n"); break;

        default: printf("Digite un número en el rango pedido\n"); break;
    }

}
