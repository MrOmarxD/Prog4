#include <IOSTREAM>

#ifndef PUNTO_H_
#define PUNTO_H_

class Punto {
private:
	int x, y;
public:
	Punto();
	Punto(int, int);
	virtual ~Punto();
	int getX();
	int getY();
	void setX(int);
	void setY(int);
	virtual void visualizar();
};


#endif /* PUNTO_H_ */
