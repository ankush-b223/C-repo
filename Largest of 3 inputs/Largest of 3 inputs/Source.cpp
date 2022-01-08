#include <stdio.h>

int main()
{
    float a, b, c, largest;
    printf("Enter 3 inputs ");
    scanf_s("%f\n%f\n%f", &a, &b, &c);
    for (largest = 0; a > largest; a = b) {
        largest = a;
    }
    if (c > largest) {
        largest = c;
    }
    else {
        largest = largest;
    }
    if(largest)

    printf("Largest is %f", largest);
    return 0;
}

