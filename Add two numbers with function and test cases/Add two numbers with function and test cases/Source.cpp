#include <stdio.h>

int add(int a, int b) {
	int result = a + b;
	return result;
}

int main() {

	int T,sum, count,num_1,num_2;

	
	scanf_s("%d", &T);

	for (count = 0; count < T; ++count) {

		
		scanf_s("%d%d", &num_1, &num_2);
		sum = add(num_1, num_2);
		printf("%d\n", sum);


	}
	return 0;
}