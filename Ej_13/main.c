#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "cadenas.h"

int main(void)
{
	char * str = malloc(sizeof(char)*5);
	strcpy(str, "Hola");
	imprimir(str);
	printf("La cadena es de %i caracteres\n", longitud(str));
	char * str2 = malloc(sizeof(char)*(longitud(str) + 1));
	copiar(str2, str);
	imprimir(str2);

	strcpy(str2, "a todos");
	char * concatenada = malloc(sizeof(char)*(longitud(str) + longitud(str2) + 1));
	copiar(concatenada, str);
	concatenar(concatenada, str2);
	imprimir(concatenada);

	char * str3 = NULL;
	str3 = clonar_cadena(concatenada);
	imprimir(str3);

	free(str);
	free(str2);
	free(str3);
	free(concatenada);
	return 0;
}
