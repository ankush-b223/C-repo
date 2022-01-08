#include <stdio.h>

int main() {

	int count, test, temp,check ;
	int array[100];

	printf("Please enter array limiter = ");
	scanf_s("%d", &check);
	
	printf("Enter array elements = ");

	for (count = 0; count < check; count++) {
		scanf_s("%d", &array[count]);
	}

	printf("The existing array is ");
	for (count = 0; count < check; ++count) {

		printf("%d ", array[count]);

	}
	printf("\n");
	for (count = 0; count < check; ++count) {

		for (test = count + 1; test < check; ++test) {

			if (array[count] > array[test]) {

				temp = array[count];
				array[count] = array[test];
				array[test] = temp;
				
			}

		}
		
	}
	printf("\nThe new array is [ascending] =  \n");
	for (count = 0; count < check; ++count) {

		printf("%d ", array[count]);

	}

	return 0;

}