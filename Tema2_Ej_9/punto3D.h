#include "punto.h"

#ifndef PUNTO3D_H_
#define PUNTO3D_H_

class Punto3D : public Punto {
private:
	int z;
public:
	Punto3D();
	Punto3D(int, int, int);
	virtual ~Punto3D();
	int getZ();
	void setZ(int);
	virtual void visualizar();
};

#endif /* PUNTO3D_H_ */
