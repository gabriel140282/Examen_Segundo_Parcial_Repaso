#include "variables_discretas.h"
#include <stdio.h>

void contarLlamadas() {
    static int contador = 0;  // Variable estática
    contador++;
    printf("Llamada numero: %d\n", contador);
}
