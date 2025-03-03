#include <stdio.h>
#include <stdlib.h>


typedef struct
{
	int x;
	int y;
}Punto;

void escalar(Punto puntos[], int *enteros, int size){
	for(int i = 0; i< size; i++){
		puntos[i].x  *= enteros[i];
		puntos[i].y  *= enteros[i];
	}
}

void imprimirArray(Punto *puntos, int size){
	printf("Array de Puntos:\n");
	for(int i = 0; i < size; i++){
		printf("(%i,%i)\n", puntos[i].x, puntos[i].y);
	}
}

int main(void)
{
	int enteros[] = {1,2,3};
	Punto *puntos = malloc(sizeof(Punto)*3);
	puntos[0].x = 2;
	puntos[0].y = 1;
	puntos[1].x = 1;
	puntos[1].y = 2;
	puntos[2].x = 2;
	puntos[2].y = 2;

	imprimirArray(puntos, 3);
	escalar(puntos, enteros, 3);
	imprimirArray(puntos, 3);

	free(puntos);

	return 0;
}
