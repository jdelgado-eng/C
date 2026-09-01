//Hacer un programa que realice la media aritmética de 2 números. (con función)

#include <stdio.h>

//Función Prototipo
float mediaAritmetica(int num1, int num2);

//Función Principal
int main(){

    int numero1, numero2;

    printf("Ingrese dos números: \n");
    scanf("%i %i", &numero1, &numero2);

    printf("La media aritmetica de los dos números es: %.2f\n", mediaAritmetica(numero1, numero2));

    return 0;
}

float mediaAritmetica(int num1, int num2){

    float operacion;
    operacion = (num1 + num2)/2;

    return operacion;
}
