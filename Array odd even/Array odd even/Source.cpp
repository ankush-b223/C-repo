#include <stdio.h>

void main() {

	int test=0, count, check, array[100], odd[100], even[100];

	printf("Enter array checker = \n");
	scanf_s("%d", &check);

	printf("Enter array elements = \n");
	for (count = 0; count < check; ++count) {
		scanf_s("%d", &array[count]);
	}

	for (count = 0; count < check; ++count) {

		if (array[count] % 2 == 0) {

			even[test] = array[count];
			test += 1;
		}

	}
	test = 0;

	for (count = 0; count < check; ++count) {

		if (array[count] % 2 != 0) {

			odd[test] = array[count];
			test += 1;
		}

	}

	printf("The even array is = \n");
	for (count = 0; count < check; ++count) {
		printf("%d ",even[count]);
	}

	printf("\n The odd array is = \n");
	for (count = 0; count < check; ++count) {
		printf("%d ",odd[count]);
	}

	printf("\n Done!! \n");

}