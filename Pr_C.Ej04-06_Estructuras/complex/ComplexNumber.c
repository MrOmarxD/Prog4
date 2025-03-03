#include "ComplexNumber.h"

#include <math.h>
#include <stdio.h>

Complex sumar(Complex c1, Complex c2)
{
	Complex c;
	c.r = c1.r + c2.r;
	c.i = c1.i + c2.i;
	return c;
}

void restar(Complex *c1, Complex c2)
{
	c1 -> r -= c2.r;
	c1 -> i -= c2.i;
}

float modulo(Complex c)
{
	return sqrt(c.r * c.r + c.i * c.i);
}

void print(Complex c)
{
	printf("(%.2f, i%.2f)\n", c.r, c.i);
}

