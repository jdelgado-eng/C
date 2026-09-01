/* Múltiplos de 5 desde 1 hasta n */

#include <stdio.h>

int main(){

    int n;
    int i=1; //contador

    printf("Digite el total de números a comprobar: "); scanf("%i", &n);

    while (i<=n){
        if(i%5==0){
            printf("%i.\n", i);
        }
        i++;
    }

    return 0;
}
