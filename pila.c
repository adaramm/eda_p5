#include "pila.h"

Pila* pila_crear()
{
    return lista_crear();
}

int pila_vacia(Pila* pila)
{
    return lista_vacia(pila);
}

void pila_push(Pila* pila, int dato)
{
    /*
    TODO
    usar lista_insertar_tail
    */
}

int pila_pop(Pila* pila)
{
    /*
    TODO
    usar lista_eliminar_tail
    */
    return -1;
}

int pila_top(Pila* pila)
{
    /*
    TODO
    regresar dato del tail
    */
    return -1;
}

void pila_destruir(Pila* pila)
{
    lista_destruir(pila);
}
