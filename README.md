# Práctica: Pilas y Colas con Listas Ligadas

## Objetivo
Implementar pilas y colas reutilizando una lista ligada.

La pila y la cola **NO deben implementar nodos directamente**.
Deben reutilizar la estructura `Lista`.

---

## Reglas

### Pila
- push → insertar por **tail**
- pop → eliminar por **tail**

### Cola
- enqueue → insertar por **tail**
- dequeue → eliminar por **head**

---

## Archivos a completar

### lista.c
- lista_insertar_tail
- lista_eliminar_head
- lista_eliminar_tail

### pila.c
- pila_push
- pila_pop
- pila_top

### cola.c
- cola_enqueue
- cola_dequeue
- cola_frente

---

## Compilar

gcc main.c nodo/nodo.c lista/lista.c pila/pila.c cola/cola.c

---

## Estructura

Lista
↑
├── Pila
└── Cola

---

## Restricción

No modificar:
- nodo.h
- nodo.c
