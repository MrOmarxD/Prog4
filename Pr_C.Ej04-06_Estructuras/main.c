#include "complex/ComplexNumber.h"

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	Complex c1 = { 2.0f, 5.0f };
	//Complex c2 = { 4.0f, 1.0f }; No queremos que sea ESTATICA

	Complex *c2;
	c2 = (Complex*) malloc(sizeof(Complex)); // En memoria DINAMICA
	c2 -> r = 4.0;
	c2 -> i = 1.0;

	Complex c = sumar(c1, *c2);

	print(c1);
	printf(" + ");
	print(*c2);
	printf(" = ");
	print(c);
	printf("\n");

	printf("Mod: %.2f\n", modulo(c1));

	restar(&c1, *c2);

	print(c1);

	printf("Size of complex %i bytes\n", sizeof(c1));

	free(c2);
	c2 = NULL;
	return 0;
}


