#include "Figura.h"
#include <iostream>
#include <string.h>

using namespace std;

Figura::Figura() {
	this->nombre = NULL;
	Figura::counter++;
}

Figura::Figura(char *nombre) {
	this->nombre = new char[strlen(nombre)+1];
	strcpy(this->nombre, nombre);
	Figura::counter++;
}

Figura::~Figura() {
	delete [] this->nombre;
}

char* Figura::getNombre() {
	return this->nombre;
}

void Figura::imprimir() {
	cout<< "Nombre: " << this->nombre <<endl;
}
