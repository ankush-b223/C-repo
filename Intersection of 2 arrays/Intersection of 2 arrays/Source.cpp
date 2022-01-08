#include <stdio.h>

void main() {

	int array_A[100], array_B[100], count, test, check_1, check_2, temp;
	int inter_array[100],index=0;

	printf("Enter two array checkers = \n");
	scanf_s("%d%d", &check_1, &check_2);

	//Taking inputs for 2 arrays

	printf("Enter elements of array_A = \n");
	for (count = 0; count < check_1; ++count) {
		scanf_s("%d", &array_A[count]);
	}

	printf("Enter elements of array_B = \n");
	for (count = 0; count < check_2; ++count) {
		scanf_s("%d", &array_B[count]);
	}

	//sorting 

	for (count = 0; count < check_1; ++count) {
		for (test = count+1; test < check_1; ++test) {
			if (array_A[count] > array_A[test]) {
				temp = array_A[count];
				array_A[count] = array_A[test];
				array_A[test] = temp;
			}
		}
	}

	for (count = 0; count < check_2; ++count) {
		for (test = count + 1; test < check_2; ++test) {
			if (array_B[count] > array_B[test]) {
				temp = array_B[count];
				array_B[count] = array_B[test];
				array_B[test] = temp;
			}
		}
	}

	// Intersection

	for (count = 0; count < check_1; ++count) {
		for (test = 0; test < check_2; ++test) {
			if (array_A[count] == array_B[test]) {
				inter_array[index] = array_A[count];
				index += 1;
			}
		}
	}

	// Duplicate removal

	for (count = 0; count < index; ++count) {
		for (test = count+1; test < index; ++test) {
			if (inter_array[count] == inter_array[test]) {
				inter_array[count] = 0;
			}
		}
	}

	// Printing intersection elements

	printf("The Intersection Elements are = \n");
	for (count = 0; count < index; ++count) {
		if (inter_array[count] == 0) {
			continue;
		}
		else {
			printf("%d ", inter_array[count]);
		}
	}

	printf("\n Done \n");











}