#include<stdio.h>
int main()
{
    char lower;

    printf("Enter an lowercase letter: ");
    scanf("%c", &lower);

    // a = 97
    // A = 65
    // difference is 32

    printf("Uppercase letter: %c\n", lower - 32);

    return 0;
}