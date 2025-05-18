#include <stdio.h>
#include <stdlib.h>

typedef struct{
	int x;
	int y;
}Point;

int main() {
	Point *arrayPuntos[5][4];

	for(int i = 0; i<5; i++){
		for(int j = 0; j<4; j++){
			arrayPuntos[i][j] = malloc(sizeof(Point)*3);
		}
	}
	Point p = {3,4};
	arrayPuntos[2][3][1] = p;

	printf("(%i,%i)", arrayPuntos[2][3][1].x, arrayPuntos[2][3][1].y);

	for(int i = 0; i<5; i++){
		for(int j = 0; j<4; j++){
			free(arrayPuntos[i][j]);
		}
		free(arrayPuntos[i]);
	}

	return 0;
}
