#include<stdio.h>
int main()
{
    char lower, upper;

    printf("Enter an Uppercase letter: ");
    scanf("%c", &upper);

    lower = tolower(upper);

    printf("Lowercase letter: %c\n", lower);

    return 0;
}
// single line comment
// I love my country


// multiline comment
/*
    I love my country
    I love my country
    I love my country
    I love my country
*/