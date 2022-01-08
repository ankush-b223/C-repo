#include <stdio.h>

void main() {

	int check, count, test, array[100], sub_array[100];
	int d_sum, sum = 0,i,found=0;

	printf("enter array checker = \n");
	scanf_s("%d", &check);

	printf("enter array elements = \n");
	for (count = 0; count < check; ++count) {
		scanf_s("%d", &array[count]);
	}

	printf("Enter desired sum = \n");
	scanf_s("%d", &d_sum);
	printf("\n");
	for (count = 0; count < check; ++count) {
		sum = array[count];
		for (test = count + 1; test < count + 5; ++test) {
			sum += array[test];
		}
		printf("\n");
		if (sum == d_sum) {
			found += 1;
			printf("Found!! It is \n");
			
			printf("%d index to %d index in the array ", count,count+4);
			
		}

	}

	if (found == 0) {
		printf("No sub_array met the conditions \n");
	}

}