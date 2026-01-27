#include <stdio.h>

/* Initiation

	do
	{
		statement/block;
		modify/update;
	} while(condition);

*/

int main() 
{
    int i = 1;

    do {
        printf("%d\n", i);
        i++;
    } while (i < 5);
    printf("Out of loop");

    return 0;
}
