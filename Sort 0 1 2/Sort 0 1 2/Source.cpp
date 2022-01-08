#include <stdio.h>

void main() {

	int count, test, check, array[100],temp;

	printf("Enter array checker = \n");
	scanf_s("%d", &check);

	printf("Enter array elements [0,1,2 only] = \n");
	for (count = 0; count < check; ++count) {
		scanf_s("%d", &array[count]);
	}

	// sorting

	for (count = 0; count < check; ++count) {
		for (test = count + 1; test < check; ++test) {
			if (array[count] > array[test]) {
				temp = array[count];
				array[count] = array[test];
				array[test] = temp;
			}
		}
	}

	//printing

	printf("Output\n");
	for (count = 0; count < check; ++count) {
		if (array[count] > 2) {
			continue;
		}
		else {
			printf("%d ", array[count]);
		}
	}
























}