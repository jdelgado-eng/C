/*59-10. Sumar 2 matrices, pidiendo al usuario el numero de filas y
columnas y ademas los elementos de cada matriz, luego mostrar el
resultado.*/

#include <stdio.h>

void sumar(int m1[][], int m2[][]);

int main (){

    int matriz1[50][50];
    int matriz2[50][50];
    int filasM1, columnasM1, filasM2, columnasM2;

    // Dimensiones de la primera matriz
    printf("Digite el numero de filas de la primera matriz: ");
    scanf("%i", &filas1);
    printf("Digite el numero de columnas de la primera matriz: ");
    scanf("%i", &columnas1);

    // Dimensiones de la segunda matriz
    printf("Digite el numero de filas de la segunda matriz: ");
    scanf("%i", &filas2);
    printf("Digite el numero de columnas de la segunda matriz: ");
    scanf("%i", &columnas2);

    // Verificar compatibilidad (la suma de matrices solo es posible si tienen el mismo número de filas y columnas)
    if (filas1 != filas2 || columnas1 != columnas2) {
        printf("\nError: las matrices deben tener las mismas dimensiones para poder sumarse.\n");
        return 1;
    }

    // Llenar matriz 1
    printf("\n--- Matriz 1 ---\n");
    for (i = 0; i < filas1; i++) {
        for (j = 0; j < columnas1; j++) {
            printf("Digite el numero matriz1[%i][%i]: ", i+1, j+1);
            scanf("%i", &matriz1[i][j]);
        }
    }

    // Llenar matriz 2
    printf("\n--- Matriz 2 ---\n");
    for (i = 0; i < filas2; i++) {
        for (j = 0; j < columnas2; j++) {
            printf("Digite el numero matriz2[%i][%i]: ", i+1, j+1);
            scanf("%i", &matriz2[i][j]);
        }
    }

    printf("\nSuma: \n");
    sumar(matriz1, matriz2, filas1, columnas1);

    return 0;
}

void sumar(int m1[50][50], int m2[50][50], int filas, int columnas){

    int suma[50][50];
    int i, j;

    for(i=0; i<filas; i++){
        for(j=0; j<columnas; j++){
            suma[i][j]= m1[i][j] + m2[i][j];
        }
    }

    for(i=0; i<filas; i++){
        for(j=0; j<columnas; j++){
            printf("%i ", suma[i][j]);
        }
        printf("\n");
    }

}
