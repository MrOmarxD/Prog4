#include "persona.h"

using namespace std;

Persona::Persona(const char *nombre, int edad) {
	this->edad = edad;
	this->nombre = new char[strlen(nombre)+1];
	strcpy(this->nombre, nombre);
	cout << "Constructor (Vacio)" <<endl;
}

Persona::Persona() {
	this->edad = 0;
	this->nombre = NULL;
	cout << "Constructor (Vacio)" <<endl;
}

Persona::~Persona() {
	delete [] this->nombre;
	cout<< "Destructor" <<endl;
}

int Persona::getEdad() {
	return this->edad;
}

char* Persona::getNombre() {
	return this->nombre;
}
