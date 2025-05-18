#ifndef ALUMNO_H_
#define ALUMNO_H_

#include "persona.h"

class Alumno : public Persona{
private:
	int numAsignaturas;
	float *notas;
public:
	Alumno();
	Alumno(int numAsignaturas, float *notas);
	~Alumno();
	int getNumAsignaturas();
	float* getNotas();
};

#endif /* ALUMNO_H_ */
