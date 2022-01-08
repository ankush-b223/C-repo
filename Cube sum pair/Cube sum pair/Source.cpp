#include <stdio.h>
#include <math.h>

void main() {

	int input,count, ways=0, integer_1, test,integer_2, inputarray[100];

	printf("Enter number = \n");
	scanf_s("%d", & input);

	for (count = 0; count < input; ++count) {

		for (test = 0; test < input; ++test) {
			inputarray[test] = count;
		}
	}

	for (integer_1 = 1; integer_1 < input; ++integer_1) {
		for (integer_2 = 0; integer_2 < input; ++integer_2) {

			if (pow(integer_1, 3) + pow(integer_2, 3) == input) {
				ways += 1;
			}

		}
	}

	printf("%d is the number of ways ", ways);






}