#include "alumno.h"
#include <iostream>

using namespace std;

void printAlumno(Alumno alumno) {
	cout<<"Alumno " << alumno.getID() << " " << alumno.getNombre() <<endl;
}

void printAlumnoRef(Alumno &alumno) {
	cout<<"Alumno " << alumno.getID() << " " << alumno.getNombre() <<endl;
}

void printAlumnoP(Alumno * alumno) {
	cout<<"Alumno " << alumno->getID() << " " << alumno->getNombre() <<endl;
}

int main(void){
	Alumno a("Juan");
	printAlumnoRef(a);
	printAlumno(a);
	Alumno b = a;
	Alumno c(b);
	printAlumnoP(&c);
	Alumno *d = new Alumno(c);
	printAlumnoP(d);
	printAlumnoRef(a);
	delete d;
	return 0;
}
