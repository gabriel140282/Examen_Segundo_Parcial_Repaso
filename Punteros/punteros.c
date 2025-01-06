#include "punteros.h"
#include <stdio.h>

// Existen dos tipos de punteros:

// 1. (punteros asociados al tipo de dato)

void puntero_asociado_al_tipo_de_dato() {
    int* ptr1;         // Puntero asociado al tipo de dato int
    int* ptr2;         // Otro puntero asociado al tipo int
    int array[5] = {10, 20, 30, 40, 50};

    // Asignar la dirección del primer elemento del arreglo
    ptr1 = &array[0];  // ptr1 apunta al primer elemento
    ptr2 = &array[2];  // ptr2 apunta al tercer elemento

    // Imprimir valores usando punteros
    printf("Valor al que apunta ptr1: %d\n", *ptr1);
    printf("Valor al que apunta ptr2: %d\n", *ptr2);

    // Modificar valores usando punteros
    *ptr1 = 15;  // Cambia el primer elemento del arreglo
    *ptr2 = 35;  // Cambia el tercer elemento del arreglo

    // Imprimir el arreglo modificado
    printf("Arreglo modificado:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", array[i]);
    }

    printf("\n");

}

// 2. (punteros asociados a la variable en si)

void puntero_asociado_a_la_variable() {
    int *ptr1;         // Puntero asociado al tipo de dato int
    int *ptr2;         // Otro puntero asociado al tipo int
    int array[5] = {10, 20, 30, 40, 50};

    // Asignar la dirección del primer elemento del arreglo
    ptr1 = &array[0];  // ptr1 apunta al primer elemento
    ptr2 = &array[2];  // ptr2 apunta al tercer elemento

    // Imprimir valores usando punteros
    printf("Valor al que apunta ptr1: %d\n", *ptr1);
    printf("Valor al que apunta ptr2: %d\n", *ptr2);

    // Modificar valores usando punteros
    *ptr1 = 15;  // Cambia el primer elemento del arreglo
    *ptr2 = 35;  // Cambia el tercer elemento del arreglo

    // Imprimir el arreglo modificado
    printf("Arreglo modificado:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", array[i]);
    }

    printf("\n");
}

// Ambos son funcionales y correctos. El usar uno u otro dependerá de tus gustos visuales, y no de la ejecución del programa en sí.