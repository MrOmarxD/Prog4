#ifndef PERSONA_H_
#define PERSONA_H_

#include <iostream>
#include <string.h>

class Persona {
private:
	int edad;
	char *nombre;
public:
	Persona(const char *nombre, int edad);
	Persona();
	~Persona();
	int getEdad();
	char *getNombre();
};

#endif /* PERSONA_H_ */
