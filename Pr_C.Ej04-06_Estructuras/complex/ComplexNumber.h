#ifndef COMPLEXNUMBER_H_
#define COMPLEXNUMBER_H_

typedef struct {
	float r;
	float i;
} Complex;

Complex sumar(Complex c1, Complex c2);

void restar(Complex *c1, Complex c2);

float modulo(Complex c);

void print(Complex c);

#endif
