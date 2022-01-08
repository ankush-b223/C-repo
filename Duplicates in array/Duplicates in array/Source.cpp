#include <stdio.h>

void main() {

	int check, count, test, array[100];

	printf("Enter array checker = ");
	scanf_s("%d", &check);
	
	printf("Enter array elements =\n");
	for (count = 0; count < check; ++count) {

		scanf_s("%d", &array[count]);
	}
	printf("\n");
	for (count = 0; count < check; ++count) {

		for (test = count+1; test < check; ++test) {

			if (array[count] == array[test]) {
				printf("%d is a duplicate input\n", array[test]);
			}

		}


	}

	printf("\n Done!! \n");

















}