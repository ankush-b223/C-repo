#include <stdio.h>

void main() {

	int array[100], relative[100], count, check_1, check_2, test;
	int temp[100], final[100],common[100],f_index;
	int index = 0,found=0,index2=0,index3=0,tempo;

	//Enter array sizes
	printf("Enter both arrays' sizes = \n");
	scanf_s("%d%d", &check_1, &check_2);

	//enter elements of array1
	printf("Enter array elements = \n");
	for (count = 0; count < check_1; ++count) {
		scanf_s("%d", &array[count]);
	}

	//enter elements of array 2
	printf("Enter relative elements = \n");
	for (count = 0; count < check_2; ++count) {
		scanf_s("%d", &relative[count]);
	}

	//making an array with common elements
	for (count = 0; count < check_2; ++count) {
		for (test = 0; test < check_1; ++test) {
			if (relative[count] == array[test]) {
				common[index] = relative[count];
				index += 1; //maintaining index of common array
			}
		}
	}

	//removing duplicate values from original array (which have already been added to common array)
	for (count = 0; count < check_1; ++count) {
		found = 0;
		for (test = 0; test < index; ++test) {
			if (array[count] == common[test]) {
				found = 1;
				break;
			}
		}
		if (found == 1) {
			continue;
		}
		else {
			temp[index2] = array[count];
			index2 += 1; //maintaining index of duplicate-free array
		}

	}

	
	//sorting duplicate-free array in ascending
	for (count = 0; count < index2; ++count) {
		for (test = count + 1; test < index2; ++test) {
			if (temp[count] > temp[test]) {
				tempo = temp[count];
				temp[count] = temp[test];
				temp[test] = tempo;

			}
		}
	}
	
	f_index = index + index2; //finding final array_size

	// final_array = common_array + sorted_duplicate_free_array


	//appending common elements to final_array
	for (count = 0; count < index; ++count) {
		final[count] = common[count];
	}

	//appending sorted elements
	for (count = index; count < f_index; ++count) {
		final[count] = temp[index3];
		index3 += 1;
	}

	//printing final relative_array
	for (count = 0; count < f_index; ++count) {
		printf("%d ", final[count]);
	}


}