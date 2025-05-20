#ifndef FIGURA_H_
#define FIGURA_H_

class Figura
{
private:
	static int numFiguras;
	char *nombre;
public:
	Figura();
	Figura(const char *nombre);
	virtual float getPerimetro() = 0;
	virtual void imprimir();
	virtual ~Figura();
	static int getNumFiguras();
};

#endif /* FIGURA_H_ */
