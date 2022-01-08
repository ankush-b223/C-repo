#include <stdio.h>
void main() {

	int count, test, check,left, array[100],q_size, queries[100];
	int a, b, temp,again,first,og_array[100];

	printf("Enter array checker and number of queries ");
	scanf_s("%d%d", &check, &q_size);

	printf("Enter array elements = \n");
	for (count = 0; count < check; ++count) {
		scanf_s("%d", &array[count]);
	}

	printf("Enter queries = \n");
	for (count = 0; count < q_size; ++count) {
		scanf_s("%d", &queries[count]);
	}

	for (count = 0; count < check; ++count) {
		array[count] = og_array[count];
	}


	for (count = 0; count < q_size; ++count) {
		left = queries[count];

		for (count = 0; count < check; ++count) {
			og_array[count] = array[count];
		}




		for (test = 0; test < left; ++test) {
			first = array[test];
			for (again = 0; again < check-1; ++again) {
				array[again] = array[again + 1];
			}
			array[check-1] = first;

		}

		for (test = 0; test < check; ++test) {
			printf("%d ", array[test]);
		}
		printf("\n");
	}






	



}