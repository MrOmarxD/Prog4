#ifndef FAMILIA_H_
#define FAMILIA_H_

#include "miembro.h"

class Familia
{
private:
	Miembro conyugeM;
	Miembro conyugeH;
	Miembro *hijos;
	int numHijos;
public:
	Familia();
	Familia(Miembro conyugeM, Miembro conyugeH);
	Familia(Miembro conyugeM, Miembro conyugeH, Miembro *hijos, int numHijos);
	~Familia();
	Miembro getConyugeH() const;
	void setConyugeH(Miembro conyugeH);
	Miembro getConyugeM() const;
	void setConyugeM(Miembro conyugeM);
	Miembro* getHijos() const;
	void setHijos( Miembro *hijos);
	int getNumHijos() const;
	void setNumHijos(int numHijos);
	char* getNombre();
	void imprimir();
};

#endif /* FAMILIA_H_ */
