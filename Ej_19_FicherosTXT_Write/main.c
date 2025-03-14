#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define N 10

int main()
{

    FILE *fichero;

    fichero = fopen("numeros.txt", "w");

    // Verificamos si el fichero se abrió correctamente
    if (fichero == NULL) {
        printf("Error al abrir el fichero.\n");
        return 1;
    }

    fprintf(fichero, "Escribiendo %i números\n", N);

    for (int i = 1; i <= N; i++) {
        fprintf(fichero, "%d\n", i);
    }

    fclose(fichero);

    return 0;
}
