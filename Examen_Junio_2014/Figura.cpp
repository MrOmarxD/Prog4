#include "Figura.h"
#include <iostream>
#include <string.h>

using namespace std;
int Figura::numFiguras = 0;

Figura::Figura() {
	this->nombre = NULL;
	Figura::numFiguras++;
}

Figura::Figura(const char *nombre) {
	this->nombre = new char[strlen(nombre)+1];
	strcpy(this->nombre, nombre);
	Figura::numFiguras++;
}

Figura::~Figura() {
	delete [] this->nombre;
}

int Figura::getNumFiguras() {
	return Figura::numFiguras;
}

void Figura::imprimir() {
	cout<< "Nombre: " << this->nombre <<endl;
}
