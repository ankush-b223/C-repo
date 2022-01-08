#include <stdio.h>

int main() {

	int count, check, input;

	printf("Enter row= ");
	scanf_s("%d", &input);

	for (count = 1; count <= input;count++) {
		for (check = 1; check <= count; check++) {
			printf("%d", check);

		}
		printf("\n");
	}
	for (count = input - 1; count >= 1; count--) {
		for (check = 1; check <= count; check++) {
			printf("%d", check);
		}
		printf("\n");
	}








	return 0;
}