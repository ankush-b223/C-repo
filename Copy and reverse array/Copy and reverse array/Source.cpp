#include <stdio.h>

int main() {

    int count,test=0, check, array[100],reverse_array[100];

    printf("Enter array limiter = \n");
    scanf_s("%d", &check);

    printf("Enter array elements = \n");
    for (count = 0; count < check; ++count) {
        scanf_s("%d", &array[count]);
    }

    for (count = check - 1; count >= 0; --count) {

        reverse_array[test] = array[count];
        test += 1;


    }
     
    for (count = 0; count < check; ++count) {
        printf("%d ", reverse_array[count]);
    }



    printf("\n Done! \n");
}