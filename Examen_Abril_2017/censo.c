#include "censo.h"

void imprimirGrupoPersonas(GrupoPersonas p){
    for (int i = 0; i < p.numPersonas; i++){
        printf("Nombre: %s Edad: %d\n", p.persona[i].nombre, p.persona[i].edad);
    }
}

int cuantasPersonas(Persona ap[],int tamanyo, int edad){
	int cantidad = 0;
	for(int i = 0; i< tamanyo; i++){
		if(ap[i].edad < edad) cantidad++;
	}
	return cantidad;
}

GrupoPersonas recuperarJovenes(Persona ap[], int tamanyo){
	int cantidad = cuantasPersonas(ap, tamanyo, 30);
	Persona* array = malloc(sizeof(Persona) * cantidad);
	GrupoPersonas gp = {array, 0, 0.00};

	int sumaEdad = 0;
	for(int i = 0; i< tamanyo; i++){
			if(ap[i].edad < 30){
				gp.persona[gp.numPersonas] = ap[i];
				gp.numPersonas++;
				sumaEdad += ap[i].edad;
			}
		}
	gp.numPersonas = cantidad;
	if(gp.numPersonas > 0) gp.mediaEdad = sumaEdad / gp.numPersonas;
	return gp;
}

Persona* recuperarYogurin(Persona ap[], int tamanyo){
	Persona *resultado =  &ap[0];
	for(int i = 0; i < tamanyo; i++){
		if(ap[i].edad < resultado->edad){
			resultado = &ap[i];
		}
	}
	return resultado;
}

int cuantosNombres(Persona ap[], int tamanyo, char letra){
    int result = 0;
    for (int i = 0; i < tamanyo; i++){
        if (ap[i].nombre[0] == letra){
            result++;
        }
    }
    return result;
}

char** listadoNombres(Persona ap[], int tamanyo, char letra){
	int cuantos = cuantosNombres(ap, tamanyo, letra);
	char** resultado = malloc(sizeof(char*)*cuantos);
	int cont = 0;
	for (int i = 0; i < tamanyo; i++){
		if (ap[i].nombre[0] == letra){
			resultado[cont] = malloc(sizeof(char)*strlen(ap[i].nombre)+1);
			strcpy(resultado[cont], ap[i].nombre);
			cont++;
		}
	}
	return resultado;
}
