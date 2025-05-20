#include "Circulo.h"
#include <iostream>
using namespace std;

Circulo::Circulo() : Figura() {
	this->radio = 0;
}

Circulo::Circulo(const char* nombre, float radio, Punto centro) : Figura(nombre) {
	this->radio = radio;
	this->centro = centro;
}


float Circulo::getPerimetro() {
	return 2 * 3.1416 * this->radio;
}

void Circulo::imprimir() {
	Figura::imprimir(); // LLAMADA A METODO DEL PADRE
	cout << "Centro: " << this->centro.imprimir() <<endl;
	cout << "Radio: " << this->radio << endl;
}

Circulo::~Circulo() {
}
