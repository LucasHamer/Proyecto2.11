#include<stdio.h>
#include<stdlib.h>

int main()
{
    int empanadas,resto,precio,cociente;
    printf("Ingrese la cantidad de empandas: ");
    scanf("%d",&empanadas);
    cociente=empanadas/12;
    resto=empanadas%12;
    precio=cociente*300+resto*30;
    printf("El total a pagar es: $%d",precio);

    return 0;
}
