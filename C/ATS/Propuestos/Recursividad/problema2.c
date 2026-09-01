//Consideremos una función que recibe un número n e imprime los números del n al 1. Con recursividad.

#include <stdio.h>

int funcionlista(int n);

int main(){

    int num, i;

    printf("Digite un número: "); scanf("%i", &num);

    for (i=num;i>0;i--){

        printf("%i. \n", funcionlista(i));
    }

    return 0;
}

int funcionlista(int n){

    if (n==1 || n==0){
        return 1;
    }
    else{
        return funcionlista(n-1)+1;
    }

}
