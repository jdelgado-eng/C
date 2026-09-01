/* Comprobar si un número digitado por el usuario es par o impar */
#include <stdio.h>

int main(){

    int num;

    printf("Digitalice su número: "); scanf("%i",&num);

    if (num % 2 == 0){
        printf("El número es par \n");
    }
    else {
        printf("El número es impar \n");
    }

    return 0;
}
