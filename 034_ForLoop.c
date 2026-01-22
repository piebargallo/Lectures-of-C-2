#include <stdio.h>

int main() 
{
    int i, j;

    for (i = 0; i < 3; i++) {          // bucle exterior (filas)
        for (j = 0; j < 4; j++) {      // bucle interior (columnas)
            printf("(%d,%d) ", i, j);
        }
        printf("\n");                  // salto de línea al terminar una fila
    }

    return 0;
}
