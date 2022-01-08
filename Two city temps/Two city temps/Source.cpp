#include <stdio.h>

void main() {

	const int city = 2, weekday = 7;
	int data[city][weekday];
	int count, input, input_1, input_2;

	
	for (count = 0; count < city; count++) {

		for (input = 0; input < weekday; input++) {
			printf("Enter temperature of city %d on weekday %d \n ", count+1, input+1);
			scanf_s("%d", &data[count][input]);
			scanf_s("%d", &data[count][input]);
		}
		printf("Nexy city!!\n");



	}

	printf("Please enter the city reference number and weekday number to know it's temperature =\n");
	scanf_s("%d%d", &input_1, &input_2);


	printf("The temperature of city %d on weekday %d was %d deegree celsius", input_1, input_2, data[input_1-1][input_2-1]);



}