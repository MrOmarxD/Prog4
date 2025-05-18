#include "alumno.h"
#include <string.h>
#include <iostream>

using namespace std;

int Alumno::counter = 0;

Alumno::Alumno(const char *nombre) {
	Alumno::counter++;
	this->id = Alumno::counter;
	//this->nombre = nombre; MALA PRACTICA
	this->nombre = new char[strlen(nombre)+1];
	strcpy(this->nombre, nombre);
	cout<< "Constructor" <<endl;
}

Alumno::~Alumno() {
	delete [] this->nombre;
	cout<< "Destructor" <<endl;
}

Alumno::Alumno(const Alumno &a) {
	this->id = a.id;
	//this->nombre = nombre; MALA PRACTICA
	this->nombre = new char[strlen(a.nombre)+1];
	strcpy(this->nombre, a.nombre);
	cout<< "Constructor (copia)" <<endl;
}

int Alumno::getID() {
	return this->id;
}

char* Alumno::getNombre() {
	return this->nombre;
}
