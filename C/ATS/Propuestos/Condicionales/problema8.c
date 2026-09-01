/*  */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char nombre[20], sexo[10];
    int edad;

    printf("Ingrese su nombre: \n"); fgets(nombre, 20, stdin);
    printf("Ingrese su edad: \n"); scanf("%i", &edad);
    printf("Ingrese su sexo: \n"); fgets(sexo, 10, stdin);

    if (edad >= 18 && strcmp(sexo, "masculino") == 0){
        printf("%s", nombre);
    }

    return 0;
}
