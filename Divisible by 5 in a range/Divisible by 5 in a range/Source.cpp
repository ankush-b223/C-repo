#include <stdio.h>

void main() {

	int interval_1=100, interval_2=200, count,sum = 0 ;

	for (count = interval_1 + 1; count < interval_2; count++) {

		if (count % 5 == 0) {
			sum = sum + count;
			printf("%d\n", count);
		}
		else {
			continue;
		}

		

	}

	printf("The sum is %d", sum);









}