#include "poligono.h"


void imprimirPoligono(Poligono poli){
	for(int i = 0; i<poli.numVertices; i++){
		printf("Vertice %d = ", i);
		fflush(stdout);
		imprimirPunto(poli.vertices[i]);
	}
}

float perimetro(Poligono poli){
	float perimetro = 0;
	for(int i = 0; i<poli.numVertices - 1; i++){
		perimetro+=distancia(poli.vertices[i], poli.vertices[i+1]);
	}
	perimetro = perimetro + distancia(poli.vertices[0],poli.vertices[poli.numVertices-1]);
	return perimetro;
}



void liberar(Poligono *poli){
	free(poli->vertices);
	poli->numVertices = 0;
	poli->vertices = NULL;

}

void anadirVertice(Poligono *poli, Punto p){
	if(poli->vertices == NULL)
		poli->vertices = (Punto*) malloc(sizeof(Punto));
	else{
		Punto *aux = poli->vertices;
		poli->vertices = (Punto*) malloc((poli->numVertices+1) * sizeof(Punto));
		for(int i = 0; i < poli->numVertices; i++){
			poli->vertices[i] = aux[i];
		}
		free(aux);
	}
	poli->vertices[poli->numVertices] = p;
	poli->numVertices++;
}

void copiarPoligono(Poligono *poli1, Poligono poli2){
	poli1->numVertices = poli2.numVertices;
	poli1->vertices = (Punto*)malloc(poli1->numVertices * sizeof(Punto));
	for(int i = 0; i < poli1->numVertices; i++){
		poli1->vertices[i] = poli2.vertices[i];
	}
}
