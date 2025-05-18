#ifndef CENSO_H_
#define CENSO_H_
#include "persona.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

typedef struct
{
	Persona* persona;
	int numPersonas;
	float mediaEdad;
} GrupoPersonas;

void imprimirGrupoPersonas(GrupoPersonas g);
int cuantasPersonas(Persona ap[],int tamanyo, int edad);
GrupoPersonas recuperarJovenes(Persona ap[], int tamanyo);
Persona* recuperarYogurin(Persona ap[], int tamanyo);
int cuantosNombres(Persona ap[], int tamanyo, char letra);
char** listadoNombres(Persona ap[], int tamanyo, char letra);

#endif /* CENSO_H_ */
