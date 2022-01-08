#include <stdio.h>

int main()
{
    char operation;
    double operand_1, operand_2;

    printf("Welcome to calculator !!");

    printf("\nEnter calculator operation =  ");
    scanf_s("%c", &operation);
    printf("Enter two operands = ");
    scanf_s("%lf %lf", &operand_1, &operand_2);
    switch (operation) {

    case '+':
        printf("Result = %lf ", operand_1 + operand_2);
        break;

    case '-':
        printf("Result = %lf ", operand_1 - operand_2);
        break;
    case '*':
        printf("Result = %lf ", operand_1 * operand_2);
        break;
    case '/':
        printf("Result = %lf  ", operand_1 / operand_2);
        break;
    default:
        printf("Wrong input! , Please enter a valid calculator operation :) ");

    }
    printf("\n Thank you!");

    return 0;
}
