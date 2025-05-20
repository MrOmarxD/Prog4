#include <iostream>
#include <string.h>
#include <stdlib.h>

#include "Familia.h"
using namespace std;

Familia::Familia() {
	this->conyugeH = NULL;
	this->conyugeM = NULL;
	this->numHijos = 0;
	this->hijos = NULL;
}

Familia::Familia(Miembro conyugeM, Miembro conyugeH) {
	this->conyugeH = conyugeH;
	this->conyugeM = conyugeM;
	this->numHijos = 0;
	this->hijos = NULL;
}

Familia::Familia(Miembro conyugeM, Miembro conyugeH, Miembro *hijos, int numHijos) {
	this->conyugeH = conyugeH;
	this->conyugeM = conyugeM;
	this->numHijos = numHijos;
	if (numHijos > 0) {
		this->hijos = new Miembro[numHijos];
		for (int i = 0; i < numHijos; i++) {
			this->hijos[i] = hijos[i];
		}
	} else {
		this->hijos = NULL;
	}
}

Familia::~Familia() {
    delete[] hijos;
}

Miembro Familia::getConyugeH() const {
	return this->conyugeH;
}

void Familia::setConyugeH(Miembro conyugeH) {
	this->conyugeH = conyugeH;
}

Miembro Familia::getConyugeM() const {
	return this->conyugeM;
}

void Familia::setConyugeM(Miembro conyugeM) {
	this->conyugeM = conyugeM;
}

Miembro* Familia::getHijos() const {
	return this->hijos;
}

void Familia::setHijos(Miembro *hijos) {
	delete[] this->hijos;
	if (this->getNumHijos() > 0) {
		this->hijos = new Miembro[this->getNumHijos()];
		for (int i = 0; i < this->getNumHijos(); i++) {
			this->hijos[i] = hijos[i];
		}
	} else {
		this->hijos = NULL;
	}
}

int Familia::getNumHijos() const {
	return this->numHijos;
}

void Familia::setNumHijos(int numHijos) {
	this->numHijos = numHijos;
}

char* Familia::getNombre() {
	const char* apellidoH = strchr(this->conyugeH.getNombre(), ' ');
	const char* apellidoM = strchr(this->conyugeM.getNombre(), ' ');
	char* str = new char[apellidoH + apellidoM + 4];
	strcpy(str, apellidoH + " - " + apellidoM);
	return str;
}

void Familia::imprimir() {
	cout<< "FAMILIA " << this->getNombre() <<endl;
	cout<< "Marido " << this->conyugeH.getNombre() << " (" << this->conyugeH.getEdad() << " años)"<<endl;
	cout<< "Mujer " << this->conyugeM.getNombre() << " (" << this->conyugeM.getEdad() << " años)"<<endl;
}
