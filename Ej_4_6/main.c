#include <stdlib.h>
#include <stdio.h>

#include "declaraciones.h"


int main(void)
{
	NumComplejo c1, c2, c3;
	c1.r = 2.5;
	c1.i = 3.4;

	imprimir(c1);
	printf("Modulo: %f\n", modulo(c1));
	return 0;
}
