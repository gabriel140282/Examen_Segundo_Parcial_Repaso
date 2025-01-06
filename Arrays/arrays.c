#include "arrays.h"
#include <stdio.h>

void edadbasic() {
    int age[5] = {10,20,30,40,50};

    printf("%d, ", age[0]);
    printf("%d, ", age[1]);
    printf("%d, ", age[2]);
    printf("%d, ", age[3]);
    printf("%d", age[4]);
    printf("\n");
}

void edad_for() {
    int age[5] = {10,20,30,40,50}; //Recorrer un array

    for (int i = 0; i < 5; i++) {
        printf("%d ", age[i]);
    }
}