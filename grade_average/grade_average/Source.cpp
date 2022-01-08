/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

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

    printf("Largest is %f", largest);
    return 0;
}
