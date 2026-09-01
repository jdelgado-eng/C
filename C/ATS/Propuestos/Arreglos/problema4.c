//54-4. Hacer 2 arrays de cadenas de caracteres, almacenar 2 nombres cada uno dentro de su respectiva variable, y luego intercambiar el contenido de los arrays.

#include <stdio.h>
#include <string.h>

int main(){

    char nombre1[20], nombre2[20];

    printf("Digite su nombre: "); fgets(nombre1, 20, stdin);

    strcpy(nombre2, nombre1); // nombre2 = nombre1

    printf("Digite otro nombre: "); fgets(nombre1, 20, stdin);

    printf("\n%s", nombre1);
    printf("%s\n", nombre2);

    return 0;
}
