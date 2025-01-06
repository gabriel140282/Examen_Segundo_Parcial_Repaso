#include "variables_ambito_general.h"
#include <stdio.h>

int contador = 0;  // Variable global

void incrementar() {
    contador++;  // Se accede a la variable global
}

void mostrar_ambito_general() {
    printf("Contador inicial: %d\n", contador);
    incrementar();
    printf("Contador despues de incrementar: %d\n", contador);
}