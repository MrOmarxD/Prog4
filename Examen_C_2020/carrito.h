#ifndef CARRITO_H_
#define CARRITO_H_

#include <stdio.h>
#include <stdlib.h>
#include "producto.h"

typedef struct
{
	int cantidad;
	Producto p;
} Compra;

typedef struct
{
	Compra *compras;
	int numCompras;
	float total;
} Carrito;

void modificarCompra(Compra* c, int cant);
void imprimirCompra(Compra c);
void crearCarrito(Carrito* c, Producto* prods[], int cantidades[], int tamanyo);
void imprimirTicket(Carrito c);
void devolverCarrito(Carrito* c);
void modificarCarrito(Carrito* carrito, int ref, int cant);

#endif /* CARRITO_H_ */
