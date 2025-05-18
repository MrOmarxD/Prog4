#ifndef MENU_H
#define MENU_H

typedef struct
{
	int id;
	float nota;
}Asignatura;

#define MAX_LINE 5

void introducirAsignatura(Asignatura);

#endif
