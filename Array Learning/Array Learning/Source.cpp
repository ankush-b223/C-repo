#include <stdio.h>

int main() {

	int input[5],count;

	printf("Enter 5 inputs = \n");

	for (count = 1; count <= 5; ++count) {
		scanf_s("%d", &input[count - 1]);
	}

	printf("The values entered by you are = \n");
	for (count = 1; count <= 5; ++count) {
		printf("%d \n", input[count - 1]);
	}


	printf("done");




	return 0;
}