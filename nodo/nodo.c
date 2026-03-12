#include <stdlib.h>
#include "nodo.h"

Nodo* nodo_crear(int dato)
{
    Nodo* nuevo = malloc(sizeof(Nodo));

    if(nuevo != NULL)
    {
        nuevo->dato = dato;
        nuevo->siguiente = NULL;
    }

    return nuevo;
}

void nodo_destruir(Nodo* nodo)
{
    free(nodo);
}
