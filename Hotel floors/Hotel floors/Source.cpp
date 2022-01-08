#include <stdio.h>

void main() {

	char string[100];
	int count,test, coins = 0,q_size ;

	printf("Enter number of queries = \n");
	scanf_s("%d", &q_size);

	for (count = 0; count < q_size; ++count) {
		scanf_s("%c", &string[count]);
	}

	for (count = 0; count < q_size; ++count) {
		for (test = 0; test < 3; ++test) {
			if (string[test] == '+' || string[test] == '-') {

			}
		}
	}











}