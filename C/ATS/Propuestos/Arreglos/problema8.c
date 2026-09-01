//58. 2) Hacer una matriz de tipo entera de 2 * 2, llenarla de números y luego copiar todo su contenido hacia otra matriz.

#include <stdio.h>

int main(){

    int matrizBase[2][2], matrizCopia[2][2], fila, columna;

    // Llenar matriz base
    for (fila=0; fila<2; fila++){
        for (columna=0; columna<2; columna++){
            printf("Digite el número matriz[%i][%i]: ", fila+1, columna+1); scanf("%i", &matrizBase[fila][columna]);
        }
    }

    //Copiar matriz base a matriz copia
    for (fila=0; fila<2; fila++){
        for (columna=0; columna<2; columna++){
            matrizCopia[fila][columna] = matrizBase[fila][columna];
        }
    }

    //Mostrar matriz copia
    for (fila=0; fila<2; fila++){
        for (columna=0; columna<2; columna++){
            printf("[%i]", matrizCopia[fila][columna]);
        }
        printf("\n"); //
    }



    return 0;
}
