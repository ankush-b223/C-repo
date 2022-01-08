#include <stdio.h>

int main() {

	int count, input,check;

	printf("Enter input = ");
	scanf_s("%d", &input);

	for (count = input; count >= 1; count--) {
		for (check = 1; check <= count; check++) {
			printf("*");
		}
		printf("\n");
	}









	return 0;
}