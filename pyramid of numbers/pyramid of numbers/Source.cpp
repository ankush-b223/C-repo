#include <stdio.h>

int main() {

	int count, check, input;

	printf("Enter input = ");
	scanf_s("%d", &input);

	for (count = 1; count <= input; count++) {
		for (check = 1; check <= count; check++) {
			printf("%d", check);
		}
		printf("\n");
	}










	return 0;
}