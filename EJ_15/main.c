#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "menu.h"

int main() {
	char opcion;
	Asignatura asignaturas[MAX_LINE];

	do{
		printf("1. Introducir asignatura\n"
				"2. Mostrar listado\n"
				"3. Calcular media\n"
				"Pulsar 'q' para salir\n");
		printf("Seleccione una opcion: \n");
		fflush(stdout);
		scanf("%c", &opcion);
		switch (opcion) {
			case 1:
				//introducirAsignatura(asignaturas);
				break;
			case 2:

				break;
			case 3:

				break;
			default:
				printf("Opción no valida, intentelo de nuevo");
				break;
		}
	}while(opcion != 'q');
	return 0;
}
