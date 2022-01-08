#include <stdio.h>

void main() {

	int count,bit,sum =0 , average;
	
	printf("Enter no. of values to be entered = ");
	scanf_s("%d", &bit);

	int array[10];
	printf("Enter Values = ");
	for (count = 1; count <= bit; count++) {
		scanf_s("%d", &array[count - 1]);
	}
	for (count = 1; count <= bit; count++) {
		sum = sum +array[count - 1];
	}
	average = sum / bit;
	printf("%d is the average ", average);





}