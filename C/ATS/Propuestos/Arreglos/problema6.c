/*
55.2) Realice un programa que permita leer una cadena de caracteres y que
devuelva el número de caracteres que tiene dicha cadena e imprimir dicha cadena al revés.
*/

#include <stdio.h>
#include <string.h>

int main(){

    int numChar, n=0;
    char cadena[25];

    printf("Digite lo que se almacenará en la cadena: "); fgets(cadena, 25, stdin);
    // Reemplaza el salto de línea por el terminador
    cadena[strcspn(cadena, "\n")] = '\0'; // Busca la primera aparición de cualquiera de los caracteres de la segunda cadena ("\n") dentro de la primera (cadena).

    while(cadena[n] != '\0'){

        //printf("%i. %c\n", n, cadena[n]);
        n++;

    }
    printf("Lo ingresado tiene: %i caracteres\n", n);
    //int lenght = strlen(cadena); //otra forma de hacerlo

    printf("Escrito al revés seria: ");
    while(n>=0){
        printf("%c", cadena[n--]); //
    }
    printf("\n");

    return 0;
}

/*
#include <stdio.h>

int main() {
    char buffer[10];

    printf("Escribe algo: ");
    if (fgets(buffer, sizeof(buffer), stdin) != NULL) {
        printf("Cadena leída: \"%s\"\n", buffer);

        // Mostrar los códigos ASCII de cada carácter
        for (int i = 0; buffer[i] != '\0'; i++) {
            printf("buffer[%d] = '%c' (ASCII %d)\n", i, buffer[i], buffer[i]);
        }
    }
    return 0;
}

*/
