//4. Invertir un número entero con recursividad



#include <stdio.h>

void invertir(int num);

int main(){
    int numero;

    do{
        printf("Digite un número a invertir: "); scanf("%i", &numero);

    }while (numero<0);

    invertir(numero);
    printf("\n");

    return 0;
}

void invertir(int num){
    //ejemplo: 24
    printf("%i", num % 10); // 24 % 10 = 4 (el residuo)

    if (num>10){
        invertir(num / 10); // 4/10 = 2 (división exacta)
    }
    // resultado: 42
}

/*

//3. Pasar de numero entero a numero binario con Recursividad

#include<stdio.h>
void binario(int n);

int main(){
	int numero;

	do{
		printf("Digite un numero: "); //5
		scanf("%i",&numero);
	}while(numero<0);

	binario(numero);

	return 0;
}

void binario(int n){

	if(n>1){ //5>1, 2>1
        binario(n/2); // 5/2= 2, 2/2= 1
    }
	printf("%i \n",n%2); // 1%2=1, 2%2=0, 5%2=1

}
*/
