#include "cola.h"

Cola* cola_crear()
{
    return lista_crear();
}

int cola_vacia(Cola* cola)
{
    return lista_vacia(cola);
}

void cola_enqueue(Cola* cola, int dato)
{
    /*
    TODO
    usar lista_insertar_tail
    */
}

int cola_dequeue(Cola* cola)
{
    /*
    TODO
    usar lista_eliminar_head
    */
    return -1;
}

int cola_frente(Cola* cola)
{
    /*
    TODO
    regresar dato del head
    */
    return -1;
}

void cola_destruir(Cola* cola)
{
    lista_destruir(cola);
}
