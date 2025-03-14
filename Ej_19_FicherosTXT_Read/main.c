#include <stdio.h>

int main() {
    FILE *fichero;
    char c;
    int total_lineas = 0;

    fichero = fopen("numeros.txt", "r");

    // Verificamos si el fichero se abrió correctamente
    if (fichero == NULL) {
        printf("Error al abrir el fichero.\n");
        return 1;
    }

    while((c = fgetc(fichero)) != EOF){
    	if(c == '\n')
    		total_lineas++;
    	putchar(c);
    }

    fclose(fichero);

    printf("El fichero tiene %d líneas.\n", total_lineas);

    return 0;
}
