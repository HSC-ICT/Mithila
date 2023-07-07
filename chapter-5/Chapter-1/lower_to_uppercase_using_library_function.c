#include<stdio.h>
int main()
{
    char lower, upper;

    printf("Enter an Lowercase letter: ");
    scanf("%c", &lower);

    upper = toupper(lower);
    // toupper function er moddhe lower variable argument hisebe pass kore diyechi

    printf("Uppercase letter: %c\n", upper);

    return 0;
}