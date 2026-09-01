/*  */

#include <stdio.h>
#include <string.h>

//MACROS
#define descuento_Honda 0.05
#define descuento_Yamaha 0.08
#define descuento_Suzuki 0.1
#define descuento_otras 0.02

int main(){

    char marca[10];
    double precio, total;

    printf("Digite la marca de la moto que desea [Honda, Yamaha, Suzuki, otra]: "); fgets(marca, 10, stdin);
    printf("Digite el precio de la moto que desea: "); scanf("%lf", &precio);

    if (strcmp(marca, "Honda")==0){
        total = precio - (precio * descuento_Honda);
        printf("El total a abonar, con el descuento proporcionado es de: %.2lf\n", total);
    }else
    if (strcmp(marca, "Yamaha")==0){
        total = precio - (precio * descuento_Yamaha);
        printf("El total a abonar, con el descuento proporcionado es de: %.2lf\n", total);
    }else
    if (strcmp(marca, "Suzuki")==0){
        total = precio - (precio * descuento_Suzuki);
        printf("El total a abonar, con el descuento proporcionado es de: %.2lf\n", total);
    }else{
        total = precio - (precio * descuento_otras);
        printf("El total a abonar, con el descuento proporcionado es de: %.2lf\n", total);
    }

    return 0;
}
