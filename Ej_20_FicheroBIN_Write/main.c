#include <stdio.h>

typedef struct{
	float x;
	float y;
}Point;

#define NUM 3

int main() {
	FILE *f = fopen("puntos.dat", "wb");;

	Point puntos[] = {{2.5f,3.0f}, {1.2f,5.23f}, {4.5f,4.4343f}};

	// Verificamos si el fichero se abrió correctamente
	if (f == NULL) {
		printf("Error al abrir el fichero.\n");
		return 1;
	}

	fwrite(puntos, sizeof(Point), NUM, f);

	fclose(f);

	return 0;
}
