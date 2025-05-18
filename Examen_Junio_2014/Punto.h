#ifndef PUNTO_H_
#define PUNTO_H_
#include "Figura.h";

class Punto : public Figura
{
	int x, y;

public:
	Punto();
	Punto(int x, int y);
	~Punto();

	void imprimir();

	int getX() const;
	int getY() const;
	void setX(int x);
	void setY(int y);

	float distancia(Punto p);
};

#endif /* PUNTO_H_ */
