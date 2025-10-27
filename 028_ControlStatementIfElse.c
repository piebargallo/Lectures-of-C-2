#include <stdio.h>

int main() 
{
    int a = 0; 
	int b = 0; 
	int sum = 0;

    printf("Intro first int: ");
    scanf("%d", &a);

    printf("Intro last int: ");
    scanf("%d", &b);

    sum = a + b;

    printf("sum of %d + %d = %d\n", a, b, sum);

	// True block statements
    if (sum % 2 == 0) {
        printf("sum is even\n");
    // False block statements
    } else {
    	printf("sum is odd\n");
	}
	// After if-else block
    return 0;
}