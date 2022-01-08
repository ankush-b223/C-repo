#include <stdio.h>

void main()
{
    int order_1;
    int piece_1;
    char prompt;
    int sum, total;
    int update1 = 0, update2 = 0, update3 = 0, update4 = 0, update5 = 0;
    printf("Welcome to Ankush's Hotel ");
repeat:

    printf("\nPlease check the menu \n");
    printf("Menu:- \n 1> Samosa - Rs 10/- \n 2> Cake - Rs 50/- \n 3> Egg - Rs 5/- \n 4> Roll - Rs 20/- \n 5> Chow - Rs 30/- ");
    printf("\nPlease Enter the order ( With index of the item ):- ");
    scanf_s("%d", &order_1);
    printf("For how many of you? = ");
    scanf_s("%d", &piece_1);
    switch (order_1)
    {
    case 1:
        printf("You have ordered %d Samosa and the total is %d", piece_1, sum = 10 * piece_1);
        update1 = sum;
        break;
    case 2:
        printf("You have ordered %d Cake and the total is %d", piece_1, sum = 50 * piece_1);
        update2 = sum;
        break;
    case 3:
        printf("You have ordered %d Egg and the total is %d", piece_1, sum = 5 * piece_1);
        update3 = sum;
        break;
    case 4:
        printf("You have ordered %d Roll and the total is %d", piece_1, sum = 20 * piece_1);
        update4 = sum;
        break;
    case 5:
        printf("You have ordered %d Chow and the total is %d", piece_1, sum = 30 * piece_1);
        update5 = sum;
        break;
    default:
        printf("Wrong Input !!");

    }

    printf("\nDo you want something else? [y/n] ");
    scanf_s(' %c', &prompt);
    if (prompt == 'y' || 'Y') {

        goto repeat;
    }
    else {
        total = update1 + update2 + update3 + update4 + update5;
        printf("Thanks!!, Your order total is %d and  will be delivered soon", total);
    }


}
