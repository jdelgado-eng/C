/* Sumar pares desde n hasta m */

#include <stdio.h>

int main(){

    int n, m, suma_pares=0;

    printf("Digite el número desde donde comenzará la suma : "); scanf("%i", &n);
    printf("Digite el número donde terminará la suma: "); scanf("%i", &m);

    //EJEMPLO 1 y 10
    while(n<=m){ // 1<=10 / 2<=10 / 3<=10 / 4<=10 / 5<=10 / 6<=10 / 7<=10 / 8<=10 / 9<=10 / 10<=10

        if(n%2==0){ // 2 - 4 - 6 - 8 - 10
            suma_pares += n; // 0+2=2 / 2+4=6 / 6+6=12 / 12+8=20 / 20+10=30
        }

        n++; // 2 - 3 - 4 - 5 - 6 - 7 - 8 - 9 - 10
    }
    printf("La suma es: %i\n", suma_pares);

    return 0;
}

