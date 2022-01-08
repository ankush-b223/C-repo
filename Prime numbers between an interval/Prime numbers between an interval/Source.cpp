#include <stdio.h>

int main() {

	int count, test, factor,interval_1 , interval_2 ;
	
	
	printf("Enter interval 1= ");
	scanf_s("%d", &interval_1);
	
	printf("Enter interval 2 = ");
	scanf_s("%d", &interval_2);
	printf("The prime numbers are = \n");
	if (interval_1 == 1 || interval_1==2) {
		printf("%d\n", interval_1);
	}

	count = interval_1 + 1;
	
	for (count; count < interval_2; count++) {
		factor = 0;
		for (test = 2; test < count; test++) {

			if (count % test == 0) {
				factor = 1;
				break;
			}
			else {
				factor = 0;
				continue;
			}

		}

		if (factor == 0) {
			printf("%d\n", count);
		}
		else {
			continue;
		}
	}

	return 0;
}