//50-2. Crear un programa que tenga un array de 100 números aleatorios entre 1 y 100.
//Una vez creado organizarlo de tal manera que almacene los números pares en un array y los impares en otro.

#include <stdio.h>
#include <stdlib.h> // Necesario para srand() y rand()
#include <time.h>   // Necesario para time()

int const TAMANO = 100;
//#include <conio.h> //Libreria que contiene el método getch

void pasarNumerosPares(int arrayRandom[], int arrayPares[], int tamano);
void pasarNumerosImpares(int arrayRandom[], int arrayImpar[], int tamano);

int main(){

    int arrayRandom[TAMANO], arrayPares[TAMANO], arrayImpares[TAMANO];
    int contador;

    srand(time(NULL)); // genera valores aleatorios

    for (contador=1; contador<=TAMANO; contador++){
        arrayRandom[contador]= rand()% + (TAMANO + 1); //
    }

    printf("Arreglo de números Pares:\n\n");
    pasarNumerosPares(arrayRandom, arrayPares, TAMANO);
    printf("\n");
    printf("Arreglo de números Impares:\n\n");
    pasarNumerosImpares(arrayRandom, arrayImpares, TAMANO);

    //getch(); //Función encargada de evitar que el programa no se cierre inmediatamente
    return 0;
}

void pasarNumerosPares(int arrayRandom[], int arrayPar[], int tamano){

    for(int iterador=1; iterador<=tamano; iterador++){
		if(arrayRandom[iterador]%2==0){ //comprobar par
			printf("%i. %i\n", iterador, arrayRandom[iterador]);
		}
	}

}
void pasarNumerosImpares(int arrayRandom[], int arrayImpar[], int tamano){

    for(int iterador=1; iterador<=tamano; iterador++){
		if(arrayRandom[iterador]%2==1){ // comprobar impar
			printf("%i. %i\n", iterador, arrayRandom[iterador]);
		}
	}

}
