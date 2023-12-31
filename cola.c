//
// Created by eferraris on 21/06/23.
//

#include "cola.h"
#include <stdio.h>
#include <stdlib.h>

/** La función desencolar, desencola al elemento según la estrategia
 *  de cola, teniendo en cuenta que esta implementación hace referencia
 *  a una cola circular.
 *
 *  Si se tiene el siguiente vector de tamaño 5:

 *  --------------
 *  10 20 -- 40 30
 *  --------------
 *
 *  Donde el 40 es el primer elemento, y el 20 es el último.
 *  Luego de aplicar la función el vector resultante debería ser:
 *
 *  --------------
 *  10 20 -- -- 30
 *  --------------
 *
 *  Donde el 30 es el primer elemento, y el 20 es el último.
 *  */
int desencolar(Cola * cola) {
    /** agregar código */
    return 0;
}

/** La función imprimir deberá imprimir una cola circular implementada en un vector
 *
 *  Si se tiene el siguiente vector de tamaño 5:

 *  --------------
 *  10 20 -- 40 30
 *  --------------
 *
 *  Donde el 40 es el primer elemento, y el 20 es el último.
 *
 *  La funcion imprimir debería imprimir 40 30 10 20.
 *  */
void imprimir(Cola *cola) {
    /** agregar código */
}

/** La función intercambiar valores hará un swap entre dos
 *  elementos adentro de una cola circular implementada en
 *  un vector
 *
 *  El usuario de esta función no tiene porqué saber
 *  que nosotros estamos usando un vector para almacenar
 *  esta cola, por lo cual la posición inicial que pasará
 *  será en relación a la cola, y no al vector. De esta
 *  manera, tenemos la siguiente correlación, si se tiene
 *  el siguiente vector de tamaño 6:
 *
 *  posición en la cola:  2  3  -- -- 0  1
 *                        ------------------
 *                        10 20 -- -- 30 50
 *                        ------------------
 *  posición en vector:   0  1  2  3  4  5
 *
 *  Dónde el 30 es el primer elemento en la cola,
 *  y el 20 es el último.
 *
 *  Si el usuario quiere intercambiar el elemento en la posición 1
 *  y adelantarlo 2 posiciones, el vector resultante debería ser:
 *
 *  posición en la cola:  2  3  -- -- 0  1
 *                        ------------------
 *                        10 50 -- -- 30 20
 *                        ------------------
 *  posición en vector:   0  1  2  3  4  5
 *
 *  A su vez, si el usuario quiere intercambiar el elemento en la posición 1
 *  y adelantarlo 3 posiciones, el vector resultante debería ser:
 *
 *  posición en la cola:  2  3  -- -- 0  1
 *                        ------------------
 *                        10 20 -- -- 50 30
 *                        ------------------
 *  posición en vector:   0  1  2  3  4  5
 *  */
void intercambiarValores(Cola *cola, int posicionEnLaCola, int posicionesHaciaAdelante) {
    /** agregar código */
}

Cola * newCola(int capacidad) {
    Cola * aux = NULL;

    aux = malloc(sizeof(Cola));

    if (aux == NULL) {
        printf("No se pudo reservar memoria para la cola.\n");
        exit(-1);
    }

    aux->cola = malloc(sizeof(int) * capacidad);
    aux->capacidad = capacidad;
    aux->tamanio = 0;
    aux->posicionDeExtraccion = 0;
    aux->posicionDeInsersion = 0;

    return aux;
}

void encolar(Cola *cola, int elemento) {

    if ( llena(cola) ) {
        printf("La cola esta llena.\n");
        return;
    }

    cola->cola[cola->posicionDeInsersion] = elemento;
    cola->posicionDeInsersion = siguientePosicion(cola, cola->posicionDeInsersion);
    cola->tamanio++;

}

int llena(Cola *cola) {
    return siguientePosicion(cola, cola->posicionDeInsersion) == cola->posicionDeExtraccion;
}

int siguientePosicion(Cola *cola, int posicion) {
    return ++posicion % cola->capacidad;
}
