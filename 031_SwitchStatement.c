#include <stdio.h>

int main() 
{
    char ch;

    printf("Intro the char: ");
    scanf(" %c", &ch);

    switch (ch) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        printf("%c es una vocal.\n", ch);
            break;
        default:
            printf("%c NO es una vocal.\n", ch);
            break;
    }
	return 0;
}
