#ifndef DECLARACIONES_H_
#define DECLARACIONES_H_

typedef struct{
	float r;
	float i;
}NumComplejo;

void imprimir(NumComplejo n);
NumComplejo sumar(NumComplejo n1, NumComplejo n2);
float modulo(NumComplejo n);

#endif
