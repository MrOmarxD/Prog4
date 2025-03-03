#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	//1 Declarar una variable de tipo entero
	int e = 0;

	//2 Definir un tipo de datos Fracción (numerador y denominador) y una variable
	//de este tipo
	typedef struct{
		int n;
		int d;
	}Fraccion;

	Fraccion f = {1,1};

	//3 Declarar un puntero a un entero
	int *pe;

	//4 Declarar un puntero a una fracción
	Fraccion *pf;

	//5 Hacer que el puntero declarado en (3) apunte al entero declarado en (1)
	pe = &e;

	//6 Apuntar con el puntero de (4) a una fracción creada en memoria dinámica
	pf = (Fraccion *) malloc(sizeof(Fraccion));
	pf -> n = 1;
	pf -> d = 1;

	//7 Modificar el valor de la fracción (por ejemplo con 3/4) creada en (2)
	f.n = 3;
	f.d = 4;

	//8 Modificar el valor de la fracción (por ejemplo con 3/4) creada en (6)
	pf -> n = 3;
	pf -> d = 4;

	//9 Modificar el valor del entero usando el puntero declarado en (3)
	*pe = 10;

	//10 Supongamos una función declarada como sumar(Fraccion a, Fraccion b).
	//Llamarla usando las dos fracciones declaradas en (2) y (6)
	void sumar(Fraccion a, Fraccion b){}
	sumar(f, *pf);

	//11 ¿Y si la funcione fuese multiplicar(Fraccion *a, Fraccion *b)? Invocarla.
	void multiplicar(Fraccion *a, Fraccion *b){}
	multiplicar(&f, pf);

	//12 Declarar un array de 5 enteros en memoria estática.
	int arrayE[5];

	//13 Declarar un array de 5 fracciones en memoria dinámica.
	Fraccion *arrayF = (Fraccion) malloc(5*sizeof(Fraccion));

	//14 Modifica la posición 3 de ambos arrays.
	arrayE[2] = 2;
	arrayF[2] -> n = 2;
	arrayF[2] -> d = 2;

	//15 Declarar un puntero a enteros y otro a fracciones y usarlos para manejar
	//los array de (12) y (13). Modificar con ellos la posición 2 de los array.
	int *pArrayE = arrayE;
	Fraccion *pArrayF = arrayF;
	pArrayE[1] = 2;
	pArrayF[1].n = 2;
	pArrayF[1].d = 2;

	//16 Imprime por pantalla la dirección de memoria del entero que está en la
	//última posición del primer array.
	printf("%p\n", &arrayE[4]);

	//17 Declara un puntero que apunte al puntero declarado en (3)
	int **ppE = &pe;

	//18 Usa el puntero anterior (17) para modificar el entero declarado en (1)
	**ppE = 49;

	//19 Haz esto mismo con el puntero a fracción declarado en (4)
	Fraccion **ppF = &pf;
	(*ppF) -> n = 1;
	(*ppF) -> d = 1;

	//20 Libera la memoria que sea necesaria de este ejercicio.
	free(arrayF);
	free(pf);
	return 0;
}
