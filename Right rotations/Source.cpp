#include <stdio.h>


void main() {

	int count,index, rotations,check, test, array[100],last;

	printf("Enter array checker = \n");
	scanf_s("%d", &check);

	printf("Enter array elements = \n");
	for (count = 0; count < check; ++count) {
		scanf_s("%d", &array[count]);
	}
	
	index = check - 1;
	printf("Enter no. of rotations = \n");
	scanf_s("%d", &rotations);

	for (count = 0; count < rotations; ++count) {

		last = array[index] ;
		index = index - 1;
		

		for (test = 1; test < check; ++test) {

			array[test+1] = array[test];
			


		}

		array[count] = last;

		


	}

	printf("The rotated array is = \n");
	for (count = 0; count < check; ++count) {
		printf("%d ",array[count]);
	}


























}