#include <stdio.h>

void main() {

	int values[2][3][2];

	int count, test, input;
	printf("Enter values \n");
	for (count = 0; count < 2; ++count) {
		for (test = 0; test < 3; ++test) {
			for (input = 0; input < 2; ++input) {

				scanf_s("%d",& values[count] [test] [input]);

			}
		}
	}
	
	printf("Entered values are = \n");
	for (count = 0; count < 2; ++count) {
		for (test = 0; test < 2; ++test) {
			for (input = 0; input < 3; ++input) {
				printf("%d\n",values[count][test][input]);
			}
		}
	}




}