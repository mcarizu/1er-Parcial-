#include <stdio.h>
#include <stdlib.h>

#include"Propietario.h"
#include"Automovil.h"

#define TAM 4


int main()
{
    ePropietario listaPropietario[TAM];
    char salir='n';
    int op=0;
    int ini;


    printf("\n1)Alta Propietario\n2)Modificacion Propitario\n3)Baja Propietario\n\t4)Salir\n");
    scanf("%d",&op);
    ini=propie_ini(listaPropietario,TAM);

    do{
        switch(op)
        {
            case 1:printf("\nALTA\n");
                    //hardcode(listaPropietario,TAM);
                    altaPropietario(listaPropietario,TAM);

                 break;
            case 2:
                    printf("\nModificar Propietario");
                 break;
            case 3:
                 printf("Baja Propietario");
                 break;
            case 4: printf("Salir");
                    salir='s';
                 break;
        }
    }while(salir=='s');
}
