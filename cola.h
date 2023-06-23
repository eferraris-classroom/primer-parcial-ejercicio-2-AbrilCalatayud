//
// Created by eferraris on 21/06/23.
//

#ifndef INC_2023_06_23_PARCIAL_2_COLA_H
#define INC_2023_06_23_PARCIAL_2_COLA_H

typedef struct cola {
    int posicionDeInsersion;
    int posicionDeExtraccion;
    int * cola;
    int capacidad;
    int tamanio;
} Cola;

Cola * newCola(int capacidad);
void encolar(Cola * cola, int elemento);
int llena(Cola * cola);
int desencolar(Cola * cola);
void imprimir(Cola * cola);
void intercambiarValores(Cola * cola, int posicionEnLaCola, int posicionesHaciaAdelante);
int siguientePosicion(Cola * cola, int posicion);

#endif //INC_2023_06_23_PARCIAL_2_COLA_H
