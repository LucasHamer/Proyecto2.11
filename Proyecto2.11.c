#include<stdio.h>
#include<stdlib.h>

int main()
{
    int docenas,ppdocena,empanadas,seguir;

    printf("Seleccione 1 para comprar una docena de empanadas o 2 para comprar una unidad: ");
    scanf("%d",&empanadas);

        if(empanadas==1){
            printf("Cuantas docenas desea?\n");
            printf("Digite un numero: ");
            scanf("%d",&docenas);
            ppdocena=docenas*300;
            printf("El total por las docenas es de: $%d",ppdocena);
            printf("Desea seguir comprando?\n");
            printf("Si es asi digite 1\n");
            printf("Si finalizo digite 2\n");
            scanf("%d",&seguir);
        }
        if(empanadas==2){
            printf("Una empanada\n");
            printf("5");
        }
    return 0;
}
