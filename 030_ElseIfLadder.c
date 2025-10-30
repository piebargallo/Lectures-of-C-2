#include <stdio.h>

int main() 
{
    int marks = 0;

    printf("Intro note (0-100): ");
    scanf("%d", &marks);

    if (marks >= 90 && marks <= 100) {
        printf("Marks is: A\n");
    }
    else if (marks >= 80 && marks < 90) {
        printf("Marks is: B\n");
    }
    else if (marks >= 70 && marks < 80) {
        printf("Maks is: C\n");
    }
    else if (marks >= 60 && marks < 70) {
        printf("Marks is: D\n");
    }
    else if (marks >= 0 && marks < 60) {
        printf("Marks is: F\n");
    }
    else {
        printf("No. Intro valor 0 y 100.\n");
    }

    return 0;
}
