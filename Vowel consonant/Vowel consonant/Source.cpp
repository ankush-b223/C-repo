#include <stdio.h>

int main()
{
    char input;
    printf("Enter an alphabet = ");
    scanf_s("%c", &input);
    if (input == 'a' || input == 'e' || input == 'i' || input == 'o' || input == 'u') {
        printf("The alphabet is a vowel");
    }
    else {
        printf("The alphabet is a consonant");
    }
    return 0;
}
