#ifndef FIGURA_H_
#define FIGURA_H_

class Figura
{
private:
	static int counter;
	char *nombre;
public:
	Figura();
	Figura(char* nombre);
	~Figura();
	char *getNombre();
	float getPerimetro();
	void imprimir();
};

#endif /* FIGURA_H_ */
