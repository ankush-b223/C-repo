#include <stdio.h>

int main() {

	int count, star,rows, columns;

	printf("Enter columns = ");
	scanf_s("%d", &columns);
	for (count = 1; count <= columns; count++) {
		for (star = 1; star <= count; star++) {
			printf("*");
		}

		printf("\n");

	}






	return 0;
}