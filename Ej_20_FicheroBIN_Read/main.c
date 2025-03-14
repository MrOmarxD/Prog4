#include <stdio.h>
#include <stdlib.h>

typedef struct{
	float x;
	float y;
}Point;

#define NUM 3

int main() {
	FILE *f = fopen("puntos.dat", "rb");

	// Verificamos si el fichero se abrió correctamente
	if (f == NULL) {
		printf("Error al abrir el fichero.\n");
		return 1;
	}

	Point *puntos = (Point*) malloc(NUM * sizeof(Point));
	fread(puntos, sizeof(Point), NUM, f);

	for(int i = 0; i< NUM; i++){
		printf("(%f,%f)\n", puntos[i].x, puntos[i].y);
	}

	fclose(f);
	free(puntos);

	return 0;
}
