#include <stdio.h>
#include <ctype.h>

int main (void){
	char c;

	printf("Introduce letras (presiona 'q' para salir):\n");

	while(c != 'q'){
		fflush(stdout);
		c = getchar();

		if (c != '\n') {
			printf("Has introducido la letra '%c'. ASCII = %d\n", toupper(c), c);
		}
	}
	printf("Has salido del programa.\n");
	return 0;
}


