#include <stdio.h>


void main() {

	int check, count, test, sum=0, input, array[100], triplet[100],index=0;
	int temp,duplicate;

	printf("Enter array checker = \n");
	scanf_s("%d", &check);

	printf("Enter array elements = \n");
	for (count = 0; count < check; ++count) {
		scanf_s("%d", &array[count]);
	}

	printf("Enter desired sum = \n");
	scanf_s("%d", &input);

	for (count = 0; count < check; ++count) {
		for (test = count+1; test < check; ++test) {
			sum = array[count] + array[test] + array[test + 1];
			if (sum == input) { 
				triplet[index] = array[count];
				index += 1;
				triplet[index] = array[test];
				index += 1;
				triplet[index] = array[test + 1];
				index += 1;
			}
			sum = 0;
		}
	}
	




	printf("\nTriplets are = \n");
	for (count = 0; count < index; ++count) {
		if (triplet[count] != NULL) {

			printf("%d ", triplet[count]);
		}
	}

}