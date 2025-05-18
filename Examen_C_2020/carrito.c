#include "carrito.h"

void modificarCompra(Compra* c, int cant){
	c->cantidad = cant;
}

void imprimirCompra(Compra c){
	printf("Ref.%i %s %.2f x %i kg/ud\n", c.p.ref, c.p.nombre, c.p.precio, c.cantidad);
}

void crearCarrito(Carrito* c, Producto* prods[], int cantidades[], int tamanyo){
	float total = 0;
	c->numCompras = tamanyo;
	c->compras = (Compra*)malloc(sizeof(Compra)*c->numCompras);

	for(int i = 0; i < tamanyo; i++){
		c->compras[i].p = *prods[i];
		c->compras[i].cantidad = cantidades[i];
		total += prods[i]->precio * cantidades[i];
	}
	c->total = total;
}

void devolverCarrito(Carrito* c){
	free(c->compras);
	c->compras = NULL;
	c->numCompras = 0;
	c->total = 0;
}

void imprimirTicket(Carrito c){

	printf("TICKET\n------\n");
	for(int i = 0; i < c.numCompras; i++)
		imprimirCompra(c.compras[i]);
	printf("....................................\n");
	printf("TOTAL: %.2f euros\n", c.total);
}

void modificarCarrito(Carrito* carrito, int ref, int cant){
	carrito->total = 0;
	for(int i = 0; i< carrito->numCompras; i++){
		if(carrito->compras[i].p.ref == ref)
			carrito->compras[i].cantidad = cant;
		carrito->total += carrito->compras[i].p.precio * carrito->compras[i].cantidad;
	}
}
