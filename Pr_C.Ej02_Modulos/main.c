#include <stdio.h>
#include "operaciones/operaciones.h"

void imprimirTabla(int);

int main(void)
{
	printf("%.2f + %.2f = %.2f\n", 2.0f, 5.0f, sumar(2.0f, 5.0f));
	printf("%.2f - %.2f = %.2f\n", 2.0f, 5.0f, restar(2.0f, 5.0f));

	imprimirTabla(3);

	printf("%i^%i = %i\n", 2, 3, potencia(2,3));
	printf("%i^%i = %i\n", 2, 0, potencia(2,0));
	printf("%i^%i = %i\n", 2, 1, potencia(2,1));

	return 0;
}

void imprimirTabla(int n)
{
	int i;

	printf("La tabla del %i:\n", n);

	for (i = 0; i <= 9; i++)
		printf("\t%i * %i = %i\n", n, i, multiplicar(n, i));
}

