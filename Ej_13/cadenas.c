#include <stdlib.h>
#include <stdio.h>

#include "cadenas.h"

void imprimir(char *str)
{
	for(int i = 0; str[i] != '\0'; i++){
		printf("%c", str[i]);
	}
	printf("\n");
}

int longitud(char * str)
{
	int i = 0;
	for(int j = 0; str[j] != '\0'; j++){
		i++;
	}
	return i;
}

void copiar(char * s1, char * s2){
	int i = 0;
	while((s1[i] = s2[i]) != '\0')
	{
		i++;
	}
}

void concatenar(char * s1, char * s2)
{
	copiar(&s1[longitud(s1)], s2);
}

char* clonar_cadena(const char *cadena) {
    if (cadena == NULL) {
        return NULL;
    }

    int longitud = longitud_cadena(cadena);
    // Asignamos memoria para la nueva cadena (incluyendo el '\0')
    char nueva_cadena = (char)malloc((longitud + 1) * sizeof(char));

    if (nueva_cadena == NULL) {
        printf("Error: No se pudo asignar memoria\n");
        return NULL;
    }

    // Copiamos la cadena original
    for (int i = 0; i <= longitud; i++) {  // Incluimos el '\0'
        nueva_cadena[i] = cadena[i];
    }

    return nueva_cadena;
}
