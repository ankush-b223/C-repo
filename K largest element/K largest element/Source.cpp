#include <stdio.h>

void main() {

    int last_index, count, temp, test, check, K, array[100];

    printf("Enter array size and K value =\n");
    scanf_s("%d%d", &check, &K);

    printf("Enter array elements = \n");
    for (count = 0; count < check; ++count) {
        scanf_s("%d", &array[count]);
    }


    //sorting

    for (count = 0; count < check; ++count) {
        for (test = count + 1; test < check; ++test) {
            if (array[count] > array[test]) {
                temp = array[count];
                array[count] = array[test];
                array[test] = temp;
            }
        }

    }
    printf("\nThe K largest elements in the array given is = \n");
    for (count = check - K; count < check; ++count) {
        printf("%d ", array[count]);
    }

    printf("\n Done \n");

}