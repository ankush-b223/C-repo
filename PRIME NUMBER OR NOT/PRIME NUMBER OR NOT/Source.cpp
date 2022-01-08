#include <stdio.h>

int main(){

	int input,count,factor;

	printf("Enter a number = ");
	scanf_s("%d", &input);

	for (count = 2; count < input; count++) {

		if (input % count == 0) {
			factor = 1;
			break;

		}
		else {
			factor = 0;
			continue;
		}

	}
	if (factor == 0) {
			printf("%d is a prime number ", input);
		
		}
		
	else {
		printf("%d is not a prime number ", input);

	}

	return 0;
}