#include <stdlib.h>
#include <stdio.h>


typedef struct
{
	int x;
	int y;
}Punto;

void escalar(Punto *p, int num){
	p -> x = p -> x + num;
	p -> y = p -> y + num;
}

int main(void)
{
	Punto p = {4, 5};
	escalar(&p, 10);

	printf("Punto: %i, %i\n", p.x, p.y);
	return 0;
}
