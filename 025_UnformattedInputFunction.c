#include <stdio.h>

int main() 
{
    char buff[100];

    printf("Intro char: ");
    /* ¡Us insegur! només per demostració. Desbordament de buffer. */
    gets(buff);  
    printf("Has intro: %s\n", buff);
	return 0;
}
