#include <stdio.h>

int main() 
{
    int num = 0;
    printf("Intro int: ");
    scanf("%d", &num);

    if (num >= 0) {
        // Primer chequeo: ¿el número es no negativo?
        if (num == 0) {
            printf("Has introducido el cero.\n");
        } else {
            // Aquí sabemos que num > 0
            printf("Has number positivo.\n");
            if (num % 2 == 0) {
                printf("Is even.\n");
            } else {
                printf("Is odd.\n");
            }
        }
    } else {
        // num < 0
        printf("Has introducido un int negativo.\n");
    }
	return 0;
}
