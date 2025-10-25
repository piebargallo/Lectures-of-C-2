#include <stdio.h>

int main() 
{
    char nombre[50];

    printf("Intro name: ");
    /* Uso clásico, hoy obsoleto */
    gets(nombre);   

    printf("\nHello ");
    puts(nombre);   

    return 0;
}
