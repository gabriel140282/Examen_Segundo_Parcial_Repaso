#include "structs.h"
#include <stdio.h>
#include <string.h>

// Definición del struct (ahora interno a `usuario.c`)
typedef struct {
    int id;
    char nombre[50];
} Usuario;

// Función interna para inicializar el usuario
void inicializarUsuario(Usuario* usuario, int id, const char* nombre) {
    usuario->id = id;
    strncpy(usuario->nombre, nombre, sizeof(usuario->nombre) - 1);
    usuario->nombre[sizeof(usuario->nombre) - 1] = '\0'; // Asegurar terminación nula
}

// Función interna para imprimir los datos del usuario
void imprimirUsuario(const Usuario* usuario) {
    printf("ID: %d, Nombre: %s\n", usuario->id, usuario->nombre);
}

// Función principal expuesta, encapsula todo
void ejecutarUsuario() {
    Usuario usuario1;

    inicializarUsuario(&usuario1, 1, "Juan Pérez");
    imprimirUsuario(&usuario1);
}