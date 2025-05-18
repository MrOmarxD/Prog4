#include "alumno.h"
#include <string.h>
#include <iostream>

using namespace std;

Alumno::Alumno() {
	this->numAsignaturas = numAsignaturas;
	this->notas = NULL;
	cout<< "Constructor" <<endl;
}

Alumno::Alumno(int numAsignaturas, float *notas) {
	this->numAsignaturas = numAsignaturas;
	for (int i = 0; i < numAsignaturas; i++) {
		this->notas[i] = notas[i];
	}
	cout<< "Constructor" <<endl;
}

int Alumno::getNumAsignaturas() {
	return this->numAsignaturas;
}

float* Alumno::getNotas() {
	return this->notas;
}
