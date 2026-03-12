#include <stdio.h>
#include "pila/pila.h"
#include "cola/cola.h"

int main() {

    Pila* p = pila_crear();
    Cola* c = cola_crear();

    pila_push(p,10);
    pila_push(p,20);

    cola_enqueue(c,1);
    cola_enqueue(c,2);

    printf("Repositorio compilado correctamente\n");

    pila_destruir(p);
    cola_destruir(c);

    return 0;
}
