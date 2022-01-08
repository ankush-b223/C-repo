#include <stdio.h>

void main() {

    int count, temp, test, check, profit, array[100];

    printf("Enter array checker = \n");
    scanf_s("%d", &check);

    printf("Enter array elements =\n");
    for (count = 0; count < check; ++count) {
        scanf_s("%d", &array[count]);
    }

    for (count = 0; count < check; ++count) {
        for (test = count + 1; test < check; ++test) {
            if (array[count] > array[test]) {
                temp = array[count];
                array[count] = array[test];
                array[test] = temp;
            }
        }
    }

    profit = array[check - 1] - array[0];


    if (profit > 0) {
        printf("\n %d is the max profit \n", profit);
    }
    else {
        printf("\n %d is the max profit \n", 0);
    }






}