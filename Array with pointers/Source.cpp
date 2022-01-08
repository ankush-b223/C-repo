#include <stdio.h>

void take() {
	int array[100], count, check;
	printf("Enter array elements \n");
	for ( count = 0; count <  check; ++count) {
		scanf_s("%d", array + count);
	}
}

void give() {
	int array[100], count, check;
	printf("Entered array elements are \n");
	for (count = 0; count < check; ++count) {
		printf("%d ", *(array + count));
	}
}
	

void main() {

	int array[100], count, check;
	
	printf("Enter size ");
	scanf_s("%d", &check);

	take();

	give();


	printf("\n Done!\n");

}