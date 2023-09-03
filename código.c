#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

#define MAX 200

int contarPalabras(char cadena[]);
int esNombreValido(char nombre[]);

int esNombreValido(char nombre[]){
    if (strlen(nombre) == strspn(nombre, "qwertyuiopasdfghjklzxcvbnmQWERTYUIOPASDFGHJKLZXCVBNM ") && contarPalabras(nombre) <= 3){  // Se aceptarán como válidos solo hasta 3 nombres y 3 apellidos
        return 1;
    } else {
        return 0;
    }
}

int contarPalabras(char cadena[]){
    int cantidad = 0;

    if (isalpha(cadena[0])){
        ++cantidad;
    }

    for (int i = 1; cadena[i] != '\0'; i++){
        if (!isalpha(cadena[i - 1]) && isalpha(cadena[i]))
            ++cantidad;
    }

    return cantidad;
}