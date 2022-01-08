#include <stdio.h>

void main() {

	int check, count,test,temp, array[100]; 

	printf("Enter arrary checker = ");
	scanf_s("%d", &check);

	printf("Enter array elements = \n");
	for (count = 0; count < check; ++count) {

		scanf_s("%d", &array[count]);

	}

	printf("Entered array is = \n");
	printf(" { ");
	for (count = 0; count < check; ++count) {

		printf("%d ", array[count]);
	}
	printf(" } \n");

	for (count = 0; count < check; ++count) {

		for (test = count+1; test < check; ++test) {

			if (array[test] > array[count]) {

				temp = array[count];
				array[count] = array[test];
				array[test] = temp;
			}

		}

	}

	printf("\nThe sorted array is = [Descending] \n");
	printf(" { ");
	for (count = 0; count < check; ++count) {

		printf("%d ", array[count]);
	}
	printf(" } \n");
	printf("Done!! \n");
	
















}