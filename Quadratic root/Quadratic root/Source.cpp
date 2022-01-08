#include <stdio.h>
#include <math.h>
int main()
{
    int a, b, c, D1, D2, D, roo;
    printf("Enter three constants for eq ");
    scanf_s("%d%d%d", &a, &b, &c);

    printf("The equation is %dx2 + %dx + %d = 0 \n", a, b, c);
    D = b * b - (4 * a * c);
    printf("%d Is the Directrix of the equation \n", D);
    if (D == 0)
    {
        roo = -b / (2 * a);
        printf("%d is the root of the equation ", roo);
    }
    else if (D > 0)
    {
        D1 = (-b + sqrt(D)) / 2 * a;
        D2 = (-b - sqrt(D)) / 2 * a;
        if (D1 > 0)
        {
            printf("%d is the root of equation ", D1);
        }
        else
        {
            printf("%d is the root of the equation ", D2);
        }
    }
    else
    {
        printf("Root doesn't exist ");
    }

    return 0;
}

