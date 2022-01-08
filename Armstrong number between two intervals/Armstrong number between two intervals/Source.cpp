#include <stdio.h>

int main() {

	int interval_1, cube, last, test ,interval_2;

	printf("Enter two intervals = ");
	scanf_s("%d%d", &interval_1, &interval_2);
	interval_1 += 1;
	printf("The Armstrong numbers are \n");
		for (interval_1; interval_1 < interval_2; interval_1++) {
			cube = 0;
			test = interval_1;
			while (test > 0) {
				
				last = test % 10;
				cube = cube + (last * last * last);
			    test = test / 10;
			}
			if (cube == interval_1 ) {
				printf("%d\n", interval_1);
			}
			else {
				continue;
			}


		}

		printf("Thank You!");

	return 0;
}