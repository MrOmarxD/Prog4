#ifndef CIRCULO_H_
#define CIRCULO_H_

#include "Figura.h"
#include "Punto.h"

class Circulo : public Figura {
private:
	float radio;
	Punto centro;
public:
	Circulo();
	Circulo(const char* nombre, float radio, Punto centro);
	virtual float getPerimetro();
	virtual void imprimir();
	virtual ~Circulo();
};



#endif /* CIRCULO_H_ */
