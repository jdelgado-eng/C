/* Hacer un árbol con '*' */

#include <stdio.h>

int main(){

    int filas;
    printf("Digite el número de filas: "); scanf("%i", &filas);
    if (filas <= 0) {
        printf("Entrada inválida. Debe ser un número entero positivo.\n");
        return 1;
    }

    // Se indica al contador debe ser menor o igual al número de filas (tamaño del árbol)
    for (int i=1; i<=filas; i++){ //filas

        //
        for (int j=1; j<=filas-i; j++){ //estrellas
            printf(" ");
        }

        // Al multiplicar por 2 y restar 1 hacemos que el número de asteriscos sea impar para que tenga forma de árbol
        for (int k=1; k<=i; k++){ //espacios
            printf(" *");

        }

        printf("\n");
    }

    return 0;

}
