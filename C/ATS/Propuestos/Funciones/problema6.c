//Hacer un programa que muestre una tabla de multiplicar hasta el 20 de un número cualquiera por pantalla, el número se pedirá en el programa principal.
//Usar procedimiento.

#include <stdio.h>

void tabla(int num);

int main(){

    int numero;
    printf("Digite el número para ver su tabla de multiplicación: "); scanf("%i", &numero);

    tabla(numero);

    return 0;
}

void tabla(int num){

    int multi=1;
    for (int i=1; i<=20; i++){

        multi= num * i;
        printf("%i * %i = %i\n", num, i, multi);

    }

}
