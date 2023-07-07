#include<stdio.h>
int main()
{
    char upper;

    printf("Enter an uppercase letter: ");
    scanf("%c", &upper);

    // a = 97
    // A = 65
    // difference is 32

    printf("Lowercase letter: %c\n", upper + 32);

    return 0;
}