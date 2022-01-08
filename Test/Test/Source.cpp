#include <stdio.h>



int main() {

	int count, test, check, left, array[100], q_size, queries[100];
	int again,last_index,i, first;
	int og_array[100];

	// take array size and query_list size
	printf("Enter array checker and number of queries ");
	scanf_s("%d%d", &check, &q_size);

	last_index = check - 1;

	//take array elements
	printf("Enter array elements = \n");
	for (count = 0; count < check; ++count) {
		scanf_s("%d", &array[count]);
	}

	//take query_list elements
	printf("Enter queries = \n");
	for (count = 0; count < q_size; ++count) {
		scanf_s("%d", &queries[count]);
	}

	//copying original array to og_array
	for (count = 0; count < check; ++count) {
		og_array[count] = array[count];
	}


	//for_1 for queries
	for (count = 0; count < q_size; ++count) {
		left = queries[count]; //assigning no. of turns to left

		//getting the original array back
		for (i = 0; i < check; ++i) {
			array[i] = og_array[i];
		}


		//for_2 , for reversing acc to left  

		for (test = 0; test < left; ++test) {
			first = array[0]; // the first element is stored
			
			// this for is to reverse
			for (again = 0; again < check - 1; ++again) {
				array[again] = array[again + 1];
				
			}
			array[last_index] = first; // first element is put to last
		}

		// prints the rotated array as per left 
		for (test = 0; test < check; ++test) {
			printf("%d ", array[test]);
		}
		printf("\n");
		

		// goes to print next input_of left by the user
	}

	return 0;
}