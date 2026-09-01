/*  */

#include <stdio.h>

int main(){

    int num, cont= 1, suma= 0, multi=1; //iniciar las variables de suma y multipliación dependendiendo de su efecto en la operación

    printf("Digite un número: "); scanf("%i", &num);

    if (num <= 10){
        while (cont<=num){
            suma+=cont; // suma= 1 , 3, , 6 , 10
            cont+=1; // 1 2 3 4 5
        }
        printf("\nLa suma es de... %i\n", suma);
    }
    else{
        while (cont <=10){
            multi = multi * cont; // multi= 1 , 2 , 4 , 12 , 48
            cont+=1; // 1 2 3 4 5
        }
        printf("La multipliación de los 10 primeros números es de... %i\n", multi);
    }

    return 0;
}
