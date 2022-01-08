#include <stdio.h>

int main() {

	int check, count;
	char input, alphabet = a;
	printf("Enter input = ");
	scanf_s("%c", &input);

	for (count = 1; count <= input; count++) {
		for (check = 1; check <= count; check++) {
			printf("%c", check);
		}
		printf("/n");
	}





	return 0;
}