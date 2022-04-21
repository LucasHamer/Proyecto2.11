#include<stdio.h>
#include<stdlib.h>

int main()
{
    int docenas,unidades,pdocenas,punidades,preciot;
    printf("Seleccione la cantidad de docenas de empanadas que quiere: ");
    scanf("%d",&docenas);
    printf("Seleccione la cantidad de unidades de empanadas que quiere: ");
    scanf("%d",&unidades);

    pdocenas=docenas*300;
    punidades=unidades*30;
    preciot=pdocenas+punidades;

    printf("El total por las empanadas es de: $%d",preciot);

    return 0;
}
