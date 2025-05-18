/*
 * main.c
 *
 *  Created on: 22/04/2014
 *      Author: perallos
 */

#include "punto.h"
#include "poligono.h"
#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	Punto p1 = {1,2};
	Punto p2 = {3,4};
	imprimirPunto(p1);
	imprimirPunto(p2);
	printf("Distancia: %f\n", distancia(p1, p2));

	printf("Después de trasladar los puntos...\n");
	trasladarXY(&p1, &p2, 5, 6);

	imprimirPunto(p1);
	imprimirPunto(p2);
	printf("Distancia: %f\n", distancia(p1, p2));

	printf("\n-------------------- Ejercicio 2 ------------------------\n");

	Poligono poli;
	printf("Introduce el numero de vertices del poligono: ");
	fflush(stdout);
	scanf("%d", &poli.numVertices);
	poli.vertices = (Punto*)malloc(poli.numVertices * sizeof(Punto));

	for(int i = 0; i<poli.numVertices; i++){
		printf("Introduce las coordenadas del vertice %d: \n",i);
		printf("X: ");
		fflush(stdout);
		scanf("%d",&poli.vertices[i].x);
		printf("Y: ");
		fflush(stdout);
		scanf("%d",&poli.vertices[i].y);
	}
	imprimirPoligono(poli);
	printf("Perimetro = %.6f\n",perimetro(poli));
	fflush(stdout);

	printf("\n-------------------- Ejercicio 3 ------------------------\n");

	printf("Después de añadir un vertice...\n");
	Punto p3 = {4,4};
	anadirVertice(&poli, p3);
	imprimirPoligono(poli);

	printf("Despues de copiar el poligono...\n");
	Poligono poli2;
	copiarPoligono(&poli2, poli);
	imprimirPoligono(poli2);

	liberar(&poli);
	liberar(&poli2);

	return 0;
}
