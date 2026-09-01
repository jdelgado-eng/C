/*
Un alumno desea saber cuál será su calificación final en la materia de Algotimos.
Dicha calificación se compone de los siguientes porcentajes:
- 55% del promedio de sus tres calificaciones parciales
- 30% de la calificación del examen final
- 15% de la calificación de un trabajo final
*/

#include <stdio.h>

int main(){
    int notafinal, parcial1, parcial2, parcial3, efinal, tf;

    printf("Escriba la calificación de los tres parciales rendidos: \n"); scanf("%i %i %i", &parcial1, &parcial2, &parcial3);
    printf("Escriba la calificación del examen final: \n"); scanf("%i", &efinal);
    printf("Escriba la calificación del trabajo final: \n"); scanf("%i", &tf);
    notafinal = ((((parcial1 + parcial2 + parcial3)/3)*0.55) + (efinal *0.3) + (tf * 0.15));
    printf("La calificación final es de: %i\n", notafinal);

    return 0;
}
