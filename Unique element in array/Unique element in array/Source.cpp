#include <stdio.h>

int main() {

	int check, array[100], done_array[100] ,freq = 0, count, index = 0, test;

	printf("Enter array checker = \n");
	scanf_s("%d", &check);

	printf("Enter array elements =\n");
	for (count = 0; count < check; ++count) {
		scanf_s("%d", &array[count]);
	}



	for (count = 0; count < check; ++count) {


		for (test = 0; test < check; ++test) {
			if (array[count] == array[test]) {
				freq += 1;

			}
			
		}
		done_array[index] = array[count];
		index += 1;

		if (freq == 1) {
			printf("\nUnique element is =%d", array[count]);
			break;
		}
		freq = 0;
		
	}
	
	printf("\nDone");


	return 0;

}