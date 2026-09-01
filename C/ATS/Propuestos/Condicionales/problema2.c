/* Comprobar si un número digitado por el usuario es positivo o negativo */
#include <stdio.h>

int main(){

    int num;

    printf("Digitalice su número: "); scanf("%i",&num);

    if (num < 0){
        printf("El número es negativo \n");
    }
    else if(num > 0){
        printf("El número es positivo \n");
    } else{
        printf("El número es cero \n");
    }

    return 0;
}
