#include <stdio.h>

int main()
{
    int num_1, num_2, num_3;
    printf("Enter 3 numbers=  ");
    scanf_s("%d %d %d", &num_1, &num_2, &num_3);
    if (num_1 > num_2) {
        if (num_1 > num_3) {
            printf("%d is the max ", num_1);
        }
        else {
            printf("%d is the max ", num_3);
        }
    }
    else {
        if (num_2 > num_3) {
            printf("%d is the max ", num_2);
        }
        else {
            printf("%d is the max", num_3);
        }
    }
    return 0;
}

