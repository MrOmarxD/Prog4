#include "persona.h"
#include "censo.h"


void crearInforme(GrupoPersonas gp, char* fichero){
	FILE* f = fopen(fichero, "w");
	fprintf(f, "CENSO DE JOVENES\n----------------\n");

	for (int i = 0; i < gp.numPersonas; i++){
		Persona persona = gp.persona[i];
		fprintf(f, "[Nombre: %s Edad: %d]\n", persona.nombre, persona.edad);
	}
	fprintf(f, "Media: %.2f", gp.mediaEdad);
	fclose(f);
}

int main(int nargumentos, char* argumentos[])
{
	Persona personas[5];
	personas[0].nombre="Hodei"; personas[0].edad=6;
	personas[1].nombre="Anita"; personas[1].edad=41;
	personas[2].nombre="Aitor"; personas[2].edad=12;
	personas[3].nombre="Idoia"; personas[3].edad=31;
	personas[4].nombre="Maite"; personas[4].edad=24;

	int numeroArgumento;
	sscanf(argumentos[1], "%d", &numeroArgumento);

	printf("Personas menores de %d años = %d\n", numeroArgumento, cuantasPersonas(personas, 5, 15));

	GrupoPersonas gp = recuperarJovenes(personas, 5);
	printf("Grupo de personas menores de 30 años: \n");
	imprimirGrupoPersonas(gp);
	printf("Media: %.2f\n", gp.mediaEdad);

	printf("La persona más joven es:\n");
	imprimirPersona(*recuperarYogurin(personas, 5));

	crearInforme(gp, "informe.txt");

	printf("-------------- Parte 3 ---------------\n");

	printf("Nombres con la inicial 'A':\n");
	int cuantos = cuantosNombres(personas, 5, 'A');
	printf("Este es el numero de nombres: %d\n", cuantos);
	char ** nombres = listadoNombres(personas, 5, 'A');

	for (int i = 0; i < cuantos; i++){
		printf("%s\n", nombres[i]);
	}
	for (int i = 0; i < cuantos; i++){
		free(nombres[i]);
	}

	free(nombres);


	return 0;
}
