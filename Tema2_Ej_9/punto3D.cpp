#include "punto3D.h"

Punto3D::Punto3D() {
	this->z=0;
}

Punto3D::Punto3D(int x, int y, int z): Punto(x, y) {
	this-> z = z;
}

Punto3D::~Punto3D() {
}

int Punto3D::getZ() {
	return z;
}

void Punto3D::setZ(int z) {
	this -> z = z;
}

void Punto3D::visualizar() {
	cout<<"(" x ", " y ", " z ")";
}
