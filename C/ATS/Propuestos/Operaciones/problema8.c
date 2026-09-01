/* 8. Dadas las horas trabajadas de una persona y el valor por hora.
Calcular su salario e imprimirlo */

#include <stdio.h>

int main(){
    int hrs_trabajadas, valor_hr, salario;

    printf("Ingrese las horas trabajadas: "); scanf("%i", &hrs_trabajadas);
    printf("Ingrese el valor por hora: "); scanf("%i", &valor_hr);

    salario = hrs_trabajadas * valor_hr;
    printf("El salario es de %i\n", salario);

    return 0;
}
