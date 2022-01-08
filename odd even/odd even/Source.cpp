#include <stdio.h>

int main()
{
    int input;
    printf("Enter a number = ");
    scanf_s("%d", &input);
    if (input % 2 == 0) {
        printf("Even number");
    }
    else {
        printf("Odd number");
    }
    return 0;
}

