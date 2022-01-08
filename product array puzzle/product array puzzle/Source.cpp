#include <stdio.h>

void main() {

	int exclude,array[100], product[100], pro=1,count, test,check;

	printf("Enter array checker =\n");
	scanf_s("%d", &check);

	printf("Enter array elements = \n");
	for (count = 0; count < check; ++count) {
		scanf_s("%d", &array[count]);
		
	}


	for (count = 0; count < check; ++count) {
		pro = 1;
		exclude = array[count];
		for (test = 0; test < check; ++test) {
			if (array[test] == exclude) {
				continue;
			}
			else {
				pro = pro * array[test];
			}
			

		}
		
		product[count] = pro;

	}

	for (count = 0; count < check; ++count) {
		printf("%d ", product[count]);
	}






















}