#include <stdio.h>

void main() {

	int array[100], count, test, found=0;
	int check,search;

	printf("Enter array check= \n");
	scanf_s("%d", &check);

	printf("Enter array elements =\n");
	for (count = 0; count < check; ++count) {
		scanf_s("%d", &array[count]);
	}

	printf("Enter number to be found= \n");
	scanf_s("%d", &search);

	for (count = 0; count < check; ++count) {
		if (array[count] == search) {
			found = 1;
			printf("%d is found in the array. ", search);
			break;
		}
	}

	if (found == 0) {
		
		printf("Number not found!");
	}










}