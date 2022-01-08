#include <stdio.h>

void main() {

	int check,  test, count,temp, array[100];

	printf("Enter array checker = \n");
	scanf_s("%d", &check);

	printf("Enter array elements = \n");
	for (count = 0; count < check; ++count) {
		scanf_s("%d", &array[count]);
	}

	for (count = 0; count < check; ++count) {
		for (test = count + 1; test < check; ++test) {
			temp = -array[count];
			if (array[test] == temp) {
				printf("%d %d ", array[count], temp);
			}
			temp = 0;

		}
	}























}