#include <stdio.h>

void main() {

	int mat1[2][2], mat2[2][2], mat_sum[2][2];

	int count, input;
	
	printf("Enter matrix 1 details \n");
	for (count = 0; count < 2; count++) {
		
		for (input = 0; input < 2; input++) {
			
			printf("Enter mat1 %d%d =", count + 1, input + 1);
			scanf_s("\n%d", &mat1[count][input]);
		}

	}

	printf("Enter matrix 2 details \n");
	for (count = 0; count < 2; count++) {
		
		for (input = 0; input < 2; input++) {

			printf("Enter mat2 %d%d =", count + 1, input + 1);
			scanf_s("\n%d", &mat2[count][input]);
		}


	}

	printf("the sum of the above two matrices will give \n");
	for (count = 0; count < 2; count++) {

		for (input = 0; input < 2; input++) {

			printf("%d  ", mat1[count][input] + mat2[count][input]);


		}
		printf("\n");


	}

















}