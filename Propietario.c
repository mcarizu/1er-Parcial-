#include <stdio.h>
#include <stdlib.h>
#include<conio.h>

#include"Propietario.h"
#include"Automovil.h"




int propie_ini( ePropietario listaPropietario[],int tamanio)
{
    int retorno = -1;
    int i;
    if(tamanio > 0 && listaPropietario != NULL)
    {
        retorno = 0;
        for(i=0; i<tamanio; i++)
        {
            listaPropietario[i].estado=0;
        }
    }
    return retorno;
}

int altaPropietario(ePropietario listaPropietario[], int tamanio)
{
    char nombre[20];
    int index;
           index=buscarLibre(listaPropietario,tamanio);
           if(index!=-1)
            {
                printf("Ingrese idPropirtario: ");
                fflush(stdin);
                scanf("%d",&listaPropietario[index].id);

                printf("\nIngrese nombre y apellido: ");
                fflush(stdin);
                scanf("%s",&nombre);
                strcpy(listaPropietario[index].nombre_y_apellido,nombre);

                printf("\nIngrese Nro de Tarjeta: ");
                fflush(stdin);
                scanf("%d",&listaPropietario[index].tarjeta);

                printf("\nIngrese direccion: ");
                puts(listaPropietario[index].direccion);
                fflush(stdin);
            }
        else
        {
                printf("No hay mas espacio para guardar propietarios!!!");
                getche();
        }
}

int buscarLibre(ePropietario listaPropietario[], int tamanio)
{
      int index=0;
      int i;

    for(i=0;i<tamanio;i++){
        if(listaPropietario[index].estado==0){
            index=i;
        }
    }
    return index;
}
void hardcode(ePropietario listaPropietario[],int tamanio)
{
    int i;
    int id[4]= {1,2,3,4};
    char nombre[4][20]= {"Juan","Luis","Maria","Jose"};
    char tarjeta[4][20]= {"111-111","222-222","333-333","444-444"};
    char direccion[4][20]= {"mitre","urquiza","belgrano","alsina"};
    for(i=0;i<tamanio;i++)
    {
        listaPropietario[i].id=id[i];
        listaPropietario[i].nombre_y_apellido=nombre[i];
        listaPropietario[i].tarjeta=tarjeta[i];
        listaPropietario[i].direccion=direccion[i];
    }
}
void listarPropietario(ePropietario listaPropietario,int tamanio)
{

}
