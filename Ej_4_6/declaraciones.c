#include "declaraciones.h"
#include <stdio.h>
#include <math.h>

void imprimir(NumComplejo n)
{
	printf("Num: %f, %fi\n", n.r, n.i);
}

NumComplejo sumar(NumComplejo n1, NumComplejo n2)
{
	NumComplejo n;
	n.r = n1.r + n2.r;
	n.i = n1.i + n2.i;
	return n;
}

float modulo(NumComplejo n)
{
	return sqrt((n.r*n.r) + (n.i*n.i));
}
