#ifndef EPROPIETARIO_H_INCLUDED
#define EPROPIETARIO_H_INCLUDED
typedef struct {
    int id;
    char nombre_y_apellido;
    int tarjeta;
    char direccion;
    int estado;


}ePropietario;


int modificaPropietario(ePropietario [], int);
int bajaPropietario(ePropietario [], int);
int altaPropietario(ePropietario [], int);
int buscarLibre(ePropietario [], int);
int eGen_init( ePropietario [],int );
void hardcode(ePropietario [],int );
void listarPropietario(ePropietario ,int );
#endif // EPROPIETARIO_H_INCLUDED
